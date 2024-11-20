#include <stdio.h>
#include <stdlib.h>

void MergeTwoArea(int arr[], int left, int mid, int right)
{
    int fIdx = left;
    int rIdx = mid + 1;
    int i;

    // 병합 한 결과를 담을 배열 sortArr 동적 할당
    int * sortArr = (int*)malloc(sizeof(int)*(right+1));
    int sIdx = left;

    while(fIdx<=mid && rIdx<=right) // 분할한 영역일 경우
    {
        // 병합 할 두 영역의 데이터들을 비교하여 정렬 순서대로 sortArr에 하나씩 옮기기
        if(arr[fIdx] <= arr[rIdx])
            sortArr[sIdx] = arr[fIdx++];
        else
            sortArr[sIdx] = arr[rIdx++];

        sIdx++;
    }

    if(fIdx > mid)  // 배열의 앞부분이 모두 sortArr에 옮겨졌다면
        // 배열의 뒷부분에 남은 데이터들을 sortArr에 그대로 옮기기
        for(i=rIdx; i <= right; i++, sIdx++)
            sortArr[sIdx] = arr[i];
    else    // 배열의 뒷부분이 모두 sortArr에 옮겨졌다면
        // 배열 앞부분에 남은 데이터들 sortArr에 그대로 옮기기
        for(i=fIdx; i <= mid; i++, sIdx++)
            sortArr[sIdx] = arr[i];
    
    for(i=left; i <= right; i++)    // 마지막으로 정리
        arr[i] = sortArr[i];
    
    free(sortArr);
}

void MergeSort(int arr[], int left, int right)
{
    int mid;

    if(left < right)
    {
        // 중간 지점 계산
        mid = (left + right) / 2;

        // 둘로 나눠서 각각 정렬
        MergeSort(arr, left, mid);
        MergeSort(arr, mid+1, right);

        // 정렬된 두 배열 병합
        MergeTwoArea(arr, left, mid, right);
    }
}

int main()
{
    int arr[7] = {3, 2, 4, 1, 7, 6, 5};
    int i;

    // 배열 arr의 전체 영역 정렬
    MergeSort(arr, 0, sizeof(arr)/sizeof(int)-1);

    for(i=0; i<7; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}