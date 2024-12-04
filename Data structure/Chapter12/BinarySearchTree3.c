#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree3.h"
#include "BinarySearchTree3.h"
#include "AVLRebalance.h"

void BSTMakeAndInit(BTreeNode ** pRoot)
{
    *pRoot = NULL;
}

BSTData BSTGetNodeData(BTreeNode * bst)
{
    return GetData(bst);
}

BTreeNode * BSTInsert(BTreeNode ** pRoot, BSTData data)
{
	if(*pRoot == NULL)
    {
    	*pRoot = MakeBTreeNode();
        SetData(*pRoot, data);
    }
    else if(data < GetData(*pRoot))
    {
    	BSTInsert(&((*pRoot)->left),data);
        *pRoot = Rebalance(pRoot);
    }
    else if(data > GetData(*pRoot))
    {
    	BSTInsert(&((*pRoot)->right),data);
        *pRoot = Rebalance(pRoot);
    }
    else
    {
    	return NULL;	// 키의 중복을 허용하지 않음
    }

    return *pRoot;
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

BTreeNode * BSTRemove(BTreeNode ** pRoot, BSTData target)
{
    // 삭제 대상이 루트 노드인 경우 별도로 고려
    BTreeNode * pVRoot = MakeBTreeNode();   // 가상의 루트 노드
    BTreeNode * pNode = pVRoot;             // parent node
    BTreeNode * cNode = *pRoot;             // current node
    BTreeNode * dNode;                      // delete node

    // 루트 노드를 pVRoot가 가리키는 노드의 오른쪽 자식 노드가 되게
    ChangeRightSubTree(pVRoot, *pRoot);

    // 삭제 대상인 노드를 탐색
    while(cNode != NULL && GetData(cNode) != target)
    {
        pNode = cNode;

        if(target < GetData(cNode))
            cNode = GetLeftSubTree(cNode);
        else
            cNode = GetRightSubTree(cNode);
    }
    // 삭제 대상이 존재하지 않다면
    if(cNode == NULL)
        return NULL;
    
    // 삭제 대상 dNode 가리키게
    dNode = cNode;

    // 경우 1) 삭제 대상이 단말 노드
    if(GetLeftSubTree(dNode) == NULL && GetRightSubTree(dNode) == NULL)
    {
        if(GetLeftSubTree(pNode) == dNode)
            RemoveLeftSubTree(pNode);
        else
            RemoveRightSubTree(pNode);
    }

    // 경우 2) 삭제 대상이 하나의 자식 노드
    else if(GetLeftSubTree(dNode) == NULL || GetRightSubTree(dNode) == NULL)
    {
        // 삭제 대상의 자식 노드
        BTreeNode * dcNode;

        if(GetLeftSubTree(dNode) != NULL)
            dcNode = GetLeftSubTree(dNode);
        else
            dcNode = GetRightSubTree(dNode);
        
        if(GetLeftSubTree(pNode) == dNode)
            ChangeLeftSubTree(pNode, dcNode);
        else
            ChangeRightSubTree(pNode, dcNode);
    }

    // 경우 3) 삭제 대상이 두 개의 자식 노드
    else
    {
        // 대체 노드 가리킴
        BTreeNode * mNode = GetRightSubTree(dNode);
        // 대체 노드의 부모 노드
        BTreeNode * mpNode = dNode;
        int delData;

        // 삭제 대상의 대체 노드 찾기
        while(GetLeftSubTree(mNode) != NULL)
        {
            mpNode = mNode;
            mNode = GetLeftSubTree(mNode);
        }

        // 대체 노드에 저장된 값을 삭제 노드에 대입
        delData = GetData(dNode);
        SetData(dNode, GetData(mNode));

        // 대체 노드의 부모 노드와 자식 노드 연결
        if(GetLeftSubTree(mpNode) == mNode)
            ChangeLeftSubTree(mpNode, GetRightSubTree(mNode));
        else
            ChangeRightSubTree(mpNode, GetRightSubTree(mNode));
        
        dNode = mNode;
        SetData(dNode, delData);
    }

    // 삭제된 노드가 루트 노드인 경우
    if(GetRightSubTree(pVRoot) != *pRoot)
        *pRoot = GetRightSubTree(pVRoot);   // 루트 노드의 변경 반영
    
    free(pVRoot);   // 가상 루트 노드 소멸

    // Rebalancing 추가
    *pRoot = Rebalance(pRoot);
    return dNode;   // 삭제된 노드 반환
}

void ShowIntData(int data)
{
    printf("%d ", data);
}

void BSTShowAll(BTreeNode * bst)
{   
    // 중위 순회
    InorderTraverse(bst, ShowIntData);
    printf("\n");
}