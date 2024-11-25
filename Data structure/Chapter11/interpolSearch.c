#include <stdio.h>

int ISearch(int ar[],  int first, int last, int target)
{
    int mid;

    // if(first > last)
    if(ar[first]>target || ar[last]<target)
    	return -1;		    // -1의 반환 = 탐색의 실패
    
    // 보간 탐색의 탐색 대상 선택 방법
    mid = ((double)(target-ar[first]) / (ar[last]-ar[first]) * (last-first)) + first;

    if(ar[mid]==target)
    	return mid;			// 탐색된 타겟의 인덱스 값 반환.
    else if(target < ar[mid])
    	return ISearch(ar, first, mid-1, target);
    else
    	return ISearch(ar, mid+1, last, target);
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int idx;

    idx = ISearch(arr, 0, sizeof(arr)/sizeof(int)-1, 7);
    if(idx==-1)
        printf("search fail. \n");
    else
        printf("target index: %d \n", idx);

    idx = ISearch(arr, 0, sizeof(arr)/sizeof(int)-1, 10);
    if(idx==-1)
        printf("search fail. \n");
    else
        printf("target index: %d \n", idx);

    idx = ISearch(arr, 0, sizeof(arr)/sizeof(int)-1, 2);
    if(idx==-1)
        printf("search fail. \n");
    else
        printf("target index: %d \n", idx);
        
    return 0;
}