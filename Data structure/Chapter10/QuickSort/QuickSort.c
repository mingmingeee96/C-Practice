#include <stdio.h>

void Swap(int arr[], int idx1, int idx2)
{
    int temp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp;
}

int MedOfThree(int arr[], int left, int right)
{
    int three[3] = {left, (left+right)/2, right};

    if(arr[three[0]] > arr[three[1]])
        Swap(three, 0, 1);
    
    if(arr[three[1]] > arr[three[2]])
        Swap(three, 1, 2);
    
    if(arr[three[0]] > arr[three[1]])
        Swap(three, 0, 1);
    
    return three[1];  // pivot 위치
}

int Partition(int arr[], int left, int right)
{
    int pIdx = MedOfThree(arr, left, right);    // 피벗 인덱스 선택
    int pivot = arr[pIdx];
    // int pivot = arr[left];  // 비벗 위치는 가장 왼쪽
    int low = left + 1;
    int high = right;

    printf("pivot: %d \n", pivot);

    while(low <= high)      // 교차되지 않을 때까지 반복
    {
        // 피벗보다 큰 값 찾기
        // while(pivot > arr[low])
        while(pivot >= arr[low] && low <= right)
            low++;          // low를 오른쪽으로 이동
        
        // 피벗보다 작은 값 찾기
        // while(pivot < arr[high])
        while(pivot <= arr[high] && high >= (left+1))
            high--;         // high를 왼쪽으로 이동
        
        // low와 high가 교차되지 않은 상태, Swap
        if(low <= high)
            Swap(arr, low, high);
    }

    Swap(arr, left, high);  // 피벗과 high가 가리키는 대상 교환
    return high;            // 옮겨진 피벗의 위치정보 반환
}

void QuickSort(int arr[], int left, int right)
{
    if(left <= right)
    {
        int pivot = Partition(arr, left, right);    // 피벗 기준 영역 나누기
        QuickSort(arr, left, pivot-1);              // 왼쪽 영역 정렬
        QuickSort(arr, pivot+1, right);             // 오른쪽 영역 정렬
    }
}

int main()
{
    // int arr[7] = {3, 2, 4, 1, 7, 6, 5};
    // int arr[3] = {3, 3, 3};
    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    int len = sizeof(arr) / sizeof(int);
    int i;

    QuickSort(arr, 0, len-1);

    for(i=0; i<len; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}