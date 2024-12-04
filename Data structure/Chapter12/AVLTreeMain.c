#include <stdio.h>
#include "BinaryTree3.h"
#include "BinarySearchTree3.h"

int main()
{
    BTreeNode * avlRoot;
    BTreeNode * clNode;         // current left node
    BTreeNode * crNode;         // current right node

    BTreeNode * clNode2;
    BTreeNode * crNode2;

    BTreeNode * clNode3;
    BTreeNode * crNode3;

    BSTMakeAndInit(&avlRoot);

    BSTInsert(&avlRoot, 1);
    BSTInsert(&avlRoot, 2);
    BSTInsert(&avlRoot, 3);
    BSTInsert(&avlRoot, 4);
    BSTInsert(&avlRoot, 5);
    BSTInsert(&avlRoot, 6);
    BSTInsert(&avlRoot, 7);
    BSTInsert(&avlRoot, 8);
    BSTInsert(&avlRoot, 9);

    printf("Root Node: %d \n", GetData(avlRoot));

    clNode = GetLeftSubTree(avlRoot);
    crNode = GetRightSubTree(avlRoot);
    printf("Left 1: %d, Right 1: %d \n", GetData(clNode), GetData(crNode));

    clNode2 = GetLeftSubTree(clNode);
    crNode2 = GetRightSubTree(clNode);
    printf("Left 2: %d, Right 2: %d \n", GetData(clNode2), GetData(crNode2));

    clNode2 = GetLeftSubTree(crNode);
    crNode2 = GetRightSubTree(crNode);
    printf("Left 3: %d, Right 3: %d \n", GetData(clNode2), GetData(crNode2));

    clNode3 = GetLeftSubTree(clNode2);
    crNode3 = GetRightSubTree(crNode2);
    printf("Left 4: %d, Right 4: %d \n", GetData(clNode3), GetData(crNode3));

    return 0;
}