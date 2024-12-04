#include <stdio.h>
#include "BinaryTree3.h"	// Ʈ���� ������ Ȯ���ϱ� ���ؼ�
#include "BinarySearchTree3.h"

int main(void)
{
	BTreeNode * avlRoot;
	BTreeNode * clNode;		// current left node
	BTreeNode * crNode;		// current right node

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

	printf("��Ʈ ���: %d \n", GetData(avlRoot));    //4

	clNode = GetLeftSubTree(avlRoot);   //2, ��Ʈ 4�� ����
	crNode = GetRightSubTree(avlRoot);  //6, ��Ʈ 4�� ������
	printf("%d, %d \n", GetData(clNode), GetData(crNode));

	clNode2 = GetLeftSubTree(clNode);    //1, 2�� ����
	crNode2 = GetRightSubTree(clNode);   //3, 2�� ������
	printf("%d, %d \n", GetData(clNode2), GetData(crNode2));

	clNode2 = GetLeftSubTree(crNode);    //5, 3�� ����
	crNode2 = GetRightSubTree(crNode);   //8, 3�� ������
	printf("%d, %d \n", GetData(clNode2), GetData(crNode2));

	clNode3 = GetLeftSubTree(crNode2);   //7, 8�� ����
	crNode3 = GetRightSubTree(crNode2);  //9, 8�� ������
	printf("%d, %d \n", GetData(clNode3), GetData(crNode3)); 
	return 0;
}