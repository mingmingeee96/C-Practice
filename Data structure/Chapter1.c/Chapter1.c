#include <stdio.h>
// LinearSearch.c 예제

/* int LSearch(int ar[], int len, int target)	// 순차 탐색 알고리즘 적용된 함수
{
	int i;
	for (i = 0; i < len; i++)
		if (ar[i] == target)
			return i;	// 찾은 대상의 인덱스 값 반환
	return -1;	// 찾지 못했음을 의미하는 값 반환
}

int main()
{
	int arr[] = { 3, 5, 2, 4, 9 };
	int idx;

	idx = LSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);

	idx = LSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);
	
	return 0;
}*/

// BinarySearch.c 예제

/* int BSearch(int ar[], int len, int target)
{
	int first = 0;	// 탐색 대상의 시작 인덱스 값
	int last = len - 1;	// 탐색 대상의 마지막 인덱스 값
	int mid;

	while (first <= last)
	{
		mid = (first + last) / 2;	// 탐색 대상의 중앙을 찾기
		if (target == ar[mid])	//  중앙에 저장된 것이 타겟이라면
			return mid;	// 탐색 완료.
		else  // 타겟 탐색 안됐다면 탐색 대상 범위 반으로 줄이기
		{
			if (target <= ar[mid])
				last = mid - 1;	// 중간값 보다 작을 경우 탐색 대상 마지막 인덱스를 중간값보다 하나 작게하여 범위 축소
			else
				first = mid + 1;	// 중간값 보다 클 경우 탐색 대상 시작 인덱스를 중간값보다 하나 많게하여 범위 축소
		}
	}
	return -1;	// 찾지 못했을 때 -1 반환
}

int main()
{
	int arr[] = { 1, 3, 5, 7, 9 };
	int idx;

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);

	return 0;
}*/

// BSWortstOpCount.c 예제

int BSearch(int ar[], int len, int target)
{
	int first = 0;
	int last = len - 1;
	int mid;
	int opCount = 0;	// 비교연산의 횟수를 기록

	while (first <= last)
	{
		mid = (first + last) / 2;
		if (target == ar[mid])
			return mid;
		else
		{
			if (target < ar[mid])
				last = mid - 1;
			else
				first = mid + 1;
		}
		opCount += 1;	// 비교연산의 횟수 1 증가
	}
	printf("비교연산횟수: %d \n", opCount);
	return -1;
}

int main()
{
	int arr1[500] = { 0, };
	int arr2[5000] = { 0, };
	int arr3[50000] = { 0, };	// 모든 요소 0으로 초기화
	int idx;

	// 배열 arr1을 대상으로, 저장되지 않은 정수 1을 찾으라고 명령
	idx = BSearch(arr1, sizeof(arr1) / sizeof(int), 1);
	if (idx == -1)
		printf("탐색 실패 \n\n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);

	// 배열 arr2을 대상으로, 저장되지 않은 정수 2을 찾으라고 명령
	idx = BSearch(arr2, sizeof(arr2) / sizeof(int), 2);
	if (idx == -1)
		printf("탐색 실패 \n\n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);

	// 배열 arr3을 대상으로, 저장되지 않은 정수 3을 찾으라고 명령
	idx = BSearch(arr3, sizeof(arr3) / sizeof(int), 3);
	if (idx == -1)
		printf("탐색 실패 \n\n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);

	return 0;
}