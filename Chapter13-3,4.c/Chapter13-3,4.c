#include <stdio.h>
int main()
{
	// TwoStringType.c 예제
	char str1[] = "My String";	// 변수 상태의 문자열
	char* str2 = "Your String";	// 상수 상태의 문자열
	printf("%s %s \n", str1, str2);

	str2 = "Our String";	// 가리키는 대상 변경.
	printf("%s %s \n", str1, str2);

	str1[0] = 'X';	// 변경 가능.
	printf("%s \n", str1);
	str2[0] = 'X';	// 변경 불가.
	printf("%s \n\n", str2);	//	위 명령에서 반영이 안되기 때문에 출력 안됨.

	// PointerArray.c 예제
	int num1 = 10, num2 = 20, num3 = 30;
	int* arr[3] = { &num1, &num2, &num3 };

	printf("%d \n", *arr[0]);	// 그냥 arr[0]으로 적으면 안됨. 배열 (할당 메모리)을 잡고 값을 넣은게 아니기때문에.
	printf("%d \n", *arr[1]);
	printf("%d \n\n", *arr[2]);	// for ( int i=0;i<3;i++) printf("%d \n", *arr[i]);로 해도 됨.

	// StringArray.c 예제
	char* strArr[3] = { "Simple", "String", "Array" };

	for (int i = 0; i < 3; i++)
		printf("%s \n", strArr[i]);

	for (int i = 0; i < 3; i++)
		printf("%p \n", strArr[i]);	// 이건 그냥 내가 궁금해서 넣은건데 아무런 메모리 주소에 저장된 걸 확인할 수 있다.

	return 0;
}