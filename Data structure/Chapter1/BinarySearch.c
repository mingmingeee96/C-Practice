#include <stdio.h>

int BSearch(int ar[], int len, int target)
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
}