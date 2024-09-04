#include <stdio.h>

int main()
{
	printf("literal int size: %d \n", sizeof(7));
	printf("literal double size: %d \n", sizeof(7.14));
	printf("literal char size: %d \n", sizeof('A'));	
	/* 
	char ch = 'A' 
	→ char ch = 65
	→ 65는 정수이므로 int형 크기인 4로 출력.
	*/
	
	float num1 = 5.789;
	float num2 = 3.24 + 5.12;

	printf("%f, %f\n", num1, num2);	
	/*사실 이때 
	"double형 데이터를 float형 변수에 저장하였으니, 
	데이터가 잘려나갈 수 있습니다."와 같은 경고창이 떠야되는데
	안뜨는 이유는 Visual c++이 업그레이드 되서 그런가 ㅎㅎ
	*/ 

	float num1 = 5.789f;	// float형 상수를 float형 변수에 저장.
	float num2 = 3.24F + 5.12F;	//대문자 소문자 구별 X

	printf("%f, %f\n", num1, num2);	// 접미사 예제

	const int MAX = 100;	// MAX는 정수 100! 변경 불가!
	const double PI = 3.1415;	// PI는 실수 3.1415! 변경 불가!

	return 0;
}