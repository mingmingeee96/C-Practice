#include <stdio.h>

int main(void)	// 10진수 정수의 출력
{
	printf("Hello Everybody\n");
	printf("%d\n", 1234);
	printf("%d %d\n\n", 10, 20);	// 예제 1 

	printf("My age: %d \n", 27);
	printf("%d is my point \n", 100);
	printf("Good \nmorning \neverybody\n\n");	// 예제 2

	printf("제 이름은 김민정입니다. \n");
	printf("제 나이는 만으로 %d살이고요. \n", 27);
	printf("제가 사는 곳의 도로명 주소는 서울시 성북구 화랑로 %d입니다.\n\n", 215);	// 문제 02-2의 문제 1

	printf("%dx%d=%d \n", 4, 5, 20);
	printf("%dx%d=%d \n", 7, 9, 63);	// 문제 02-2의 문제 2
	printf("%d x %d = %d \n", 7, 9, 7 * 9);		// *표시는 곱셈, 바로 계산해서 나타내줌! 아주 좋다!
	return 0;
}