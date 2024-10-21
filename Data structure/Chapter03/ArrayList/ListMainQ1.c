/*ListMain함수를 이용해서 다음 순서대로 일이 진행되도록 main 함수를 정의해보자.
1. 리스트를 생성 및 초기화 한 다음, 정수 1부터 9까지 리스트에 저장
2. 리스트에 저장된 값을 순차적으로 참조하여 그 합을 계산하여 출력
3. 리스트에 저장된 값들 중 2의 배수와 3의 배수에 해당하는 값을 모두 삭제
4. 마지막으로 리스트에 저장된 데이터를 순서대로 출력*/

#include <stdio.h>
#include "ArrayList.h"

int main()
{
    // ArrayList의 생성 및 초기화
    List list;
    int data;
    int sum=0;      // 0으로 초기화 하지 않으면 오답 발생.
    ListInit(&list);

    // 9개의 데이터 저장
    for(int i=0; i<9; i++)
        LInsert(&list, i+1);

    // 저장된 데이터 순차적으로 참조하여 그 합 출력
    if(LFirst(&list, &data))        // 첫 번째 데이터 조회
    {
        sum += data;

        while(LNext(&list, &data))  // 두 번째 이후의 데이터 조회
            sum += data;
    }
    printf("sum of data: %d\n\n", sum);    

    // 2의 배수 및 3의 배수 해당되는 값 모두 삭제
    if(LFirst(&list, &data))
    {
        if(data%2==0 || data%3==0)
            LRemove(&list);
        
        while(LNext(&list, &data))
        {
            if(data%2==0 || data%3==0)
                LRemove(&list);
        }
    }

    // 삭제 후 남은 데이터 전체 출력 ///////
    printf("Now Number of Data: %d\n", LCount(&list));

    if(LFirst(&list, &data))
    {
        printf("%d ", data);

        while(LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");
    return 0;
}