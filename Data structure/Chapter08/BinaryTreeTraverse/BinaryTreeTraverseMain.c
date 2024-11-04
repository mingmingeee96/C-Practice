#include <stdio.h>
#include "BinaryTree.h"

// 중위 순회 (Inorder Traversal)
void InorderTraverse(BTreeNode * bt)
{
    if(bt == NULL)  // bt가 NULL이면 재귀 탈출
        return;

    InorderTraverse(bt->left);
    printf("%d \n", bt->data);
    InorderTraverse(bt->right);
}

// 후위 순회 (Postorder Traversal)
void PostorderTraverse(BTreeNode * bt)
{
    if(bt == NULL)
        return;
    
    PostorderTraverse(bt->left);
    PostorderTraverse(bt->right);
    printf("%d \n", bt->data);  // 후위 순회로 루트 노드 마지막 방문
}

// 전위 순회 (Preorder Traversal)
void PreorderTraverse(BTreeNode * bt)
{
    if(bt == NULL)
        return;
    
    printf("%d \n", bt->data);  // 전위 순회로 루트 노드 먼저 방문
    PreorderTraverse(bt->left);
    PreorderTraverse(bt->right);
}

int main()
{
    BTreeNode * bt1 = MakeBTreeNode();
    BTreeNode * bt2 = MakeBTreeNode();
    BTreeNode * bt3 = MakeBTreeNode();
    BTreeNode * bt4 = MakeBTreeNode();

    SetData(bt1, 1);
    SetData(bt2, 2);
    SetData(bt3, 3);
    SetData(bt4, 4);

    MakeLeftSubTree(bt1, bt2);
    MakeRightSubTree(bt1, bt3);
    MakeLeftSubTree(bt2, bt4);

    printf("<Inorder Traversal Check>\n");
    InorderTraverse(bt1);
    
    return 0;
}