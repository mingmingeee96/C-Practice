#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ListBaseStack.h"
#include "BinaryTree2.h"

BTreeNode * MakeExpTree(char exp[])
{
    Stack stack;
    BTreeNode * pnode;

    int expLen = strlen(exp);
    int i;

    StackInit(&stack);

    for(i=0; i<expLen; i++)
    {
        pnode = MakeBTreeNode();
        
        if(isdigit(exp[i]))		// 피연산자일 경우
        {
        	SetData(pnode, exp[i]-'0');		// 문자를 정수로 바꿔서 저장
        }
        else	// 연산자일 경우
        {
        	MakeRightSubTree(pnode, SPop(&stack));	// 스택에서 꺼내어 오른쪽 자식 노드로 연결
            MakeLeftSubTree(pnode, SPop(&stack));	// 스택에서 꺼내어 왼쪽 자식 노드로 연결
            SetData(pnode, exp[i]);
        }
        
        SPush(&stack, pnode);
    }
    
    return SPop(&stack);
}

int EvaluateExpTree(BTreeNode * bt)
{
    int op1, op2;

	if(GetLeftSubTree(bt)==NULL && GetRightSubTree(bt)==NULL)	// 단말 노드의 경우
		return GetData(bt);

	op1 = EvaluateExpTree(GetLeftSubTree(bt));
	op2 = EvaluateExpTree(GetRightSubTree(bt));

	switch(GetData(bt))
	{
	case '+':
		return op1+op2;
	case '-':
		return op1-op2;
	case '*':
		return op1*op2;
	case '/':
		return op1/op2;
	}

	return 0;
}

void ShowNodeData(int data)
{
	if(0<=data && data <=9)
    	printf("%d ", data);	// 피연산자 출력
    else
    	printf("%c ", data);	// 연산자 출력
}

void ShowPrefixTypeExp(BTreeNode * bt)	// 전위 표기법으로 수식 출력
{
	PreorderTraverse(bt, ShowNodeData);
}

void ShowInfixTypeExp(BTreeNode * bt)	// 중위 표기법 (소괄호 포함)으로 수식 출력
{
	if(bt == NULL)
		return;
        
    if(bt->left != NULL || bt->right != NULL)
		printf(" ( ");
    
    ShowInfixTypeExp(bt->left);		// 첫 번째 피연산자 출력
    ShowNodeData(bt->data);			// 연산자 출력
    ShowInfixTypeExp(bt->right);	// 두 번째 피연산자 출력
    
    if(bt->left != NULL || bt->right != NULL)
		printf(" ) ");
}

void ShowPostfixTypeExp(BTreeNode * bt)	// 후위 표기법으로 수식 출력
{
	PostorderTraverse(bt, ShowNodeData);
}