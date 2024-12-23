#include <stdio.h>
#include "BinaryTree2.h"
#include "BinarySearchTree.h"

void BSTMakeAndInit(BTreeNode ** pRoot)
{
    *pRoot = NULL;
}

BSTData BSTGetNodeData(BTreeNode * bst)
{
    return GetData(bst);
}

void BSTInsert(BTreeNode ** pRoot, BSTData data)
{
    BTreeNode * pNode = NULL;       // parent node
    BTreeNode * cNode = *pRoot;     // current node
    BTreeNode * nNode = NULL;       // new node

    // 새로운 노드(새 데이터 담긴 노드)가 추가될 위치 찾기
    while(cNode != NULL)
    {
        if(data == GetData(cNode))
            return;     // already inserted
        
        pNode = cNode;

        if(GetData(cNode) > data)
            cNode = GetLeftSubTree(cNode);
        else
            cNode = GetRightSubTree(cNode);
    }

    // pNode의 자식 노드로 추가할 새 노드의 생성
    nNode = MakeBTreeNode();        // 새 노드 생성
    SetData(nNode, data);           // 새 노드에 데이터 저장

    // pNode의 자식 노드로 새 노드를 추가
    if(pNode != NULL)               // 새 노드가 루트 노드가 아니라면
    {
        if(data < GetData(pNode))
            MakeLeftSubTree(pNode, nNode);
        else
            MakeRightSubTree(pNode, nNode);
    }
    else                            // 새 노드가 루트 노드라면
    {
        *pRoot = nNode;
    }
}

BTreeNode * BSTSearch(BTreeNode * bst, BSTData target)
{
    BTreeNode * cNode = bst;        // current node
    BSTData cd;                     // current data

    while(cNode != NULL)
    {
        cd = GetData(cNode);

        if(target == cd)
            return cNode;
        else if(target < cd)
            cNode = GetLeftSubTree(cNode);
        else
            cNode = GetRightSubTree(cNode);
    }

    return NULL;    // 탐색대상이 저장되어 있지 않음.
}