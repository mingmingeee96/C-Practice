#include <stdio.h>

int main()
{
	int num1 = 3;
	double num2 = 2.2;

	double result1 = num1 / num2;		//int형을 double형으로 변환
	double result2 = num1 / (int)num2;	//double형을 int형으로 변환

	printf("result1 : %f \n", result1);
	printf("result2 : %f \n\n", result2);

	double num3 = 17.23;
	int num4 = (int)num3;	//double형을 int형으로 변환

	printf("num1 : %f \n", num3);
	printf("num2 : %d \n\n", num4);	// Notion AI 예시

	double Num1 = 245;
	int Num2 = 3.1415;
	int Num3 = 129;
	char ch = Num3;

	printf("정수 245를 실수로: %f \n", Num1);
	printf("실수 3.1415룰 정수로: %d \n", Num2);
	printf("큰 정수129를 작은 정수로: %d \n\n", ch);	
	// 여기서 char형의 수는 128이 끝이기 때문에 상위 바이트 손실로 음수로 부호 바뀜.
	// 예제

	int Num4 = 3, Num5 = 4;
	double divResult;
	double DivResult;
	divResult = Num4 / Num5;
	DivResult = (double)Num4 / Num5;
	printf("나눗셈 결과: %f \n", divResult);	// 결과값 0.000000
	printf("나눗셈 결과: %f \n\n", DivResult);	// 결과값 0.750000

	return 0;
}