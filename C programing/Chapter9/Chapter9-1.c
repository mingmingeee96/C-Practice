#include <stdio.h>

/* PrintfOutput.c 예제 */
int main()
{
	int num1, num2;
	num1 = printf("12345\n");	// printf함수를 먼저 실행하고 그 반환하는 값을 num1에 저장.
	num2 = printf("I love my home\n");
	printf("%d %d \n", num1, num2);
	return 0;
}

/* SimpleAddFunc.c 예제 */
int Add(int num1, int num2)
{
	return num1 + num2;	// 덧셈이 선 진행되고 그 결과가 반환됨.
}

int main()
{
	int result;
	result = Add(3, 4);	// = 대입 전에 Add 함수 호출 먼저 진행 되고 그 값이 result에 저장.
	printf("덧셈결과1: %d \n", result);
	result = Add(5, 8);
	printf("덧셈결과2: %d \n", result);
	return 0;
}

/* SmartAddFunc.c 예제 */
int Add(int num1, int num2)	// 인자 전달 O, 반환 값 O
{
	return num1 + num2;
}

void ShowAddResult(int num)	// 인자 전달 O, 반환 값 X
{
	printf("덧셈결과 출력: %d \n", num);
}

int ReadNum(void)	// 인자 전달 X, 반환 값 O
{
	int num;
	scanf_s("%d", &num);
	return num;
}

void HowToUseThisProg(void)	// 인자 전달 X, 반환 값 X
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
	printf("자! 그럼 두 개의 정수를 입력하세요. \n");
}

int main()
{
	int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	return 0;
}

/* NumCompare.c 예제 */
int NumberCompare(int num1, int num2);

int main()
{
	printf("3과 4중에서 큰 수는 %d 이다.\n", NumberCompare(3, 4));	// 값이 아니라 함수 호출문이 온 경우
	printf("7과 2중에서 큰 수는 %d 이다.\n", NumberCompare(7, 2));	// 함수에서 반환하는 값이 들어가게 된다. 
	return 0;
}

int NumberCompare(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

/* AbsoCompare.c 예제 */
int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

int main()
{
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d와 %d중 절댓값이 큰 정수: %d \n",
		num1, num2, AbsoCompare(num1, num2));
	return 0;
}

int AbsoCompare(int num1, int num2)
{
	if (GetAbsoValue(num1) > GetAbsoValue(num2))
		return num1;
	else
		return num2;
}

int GetAbsoValue(int num)
{
	if (num < 0)
		return num * (-1);
	else
		return num;
}

/* 문제 09-1 */
/* Q.1 세 개의 정수를 인자로 전달받아 그 중 가장 큰 수를 반환하는 함수와 가장 작은 수를 반화하는 함수 정의.
이 함수들을 호출하는 적절한 main함수도 작성.*/
int Maximum(int num1, int num2, int num3)
{
	if (num1 > num2)	// 이렇게 대소 비교하는 아이디어 필요! 일단 두개 순서가 정해지면 그 다음 순서는 또 두개만 비교해도 아니깐.
		return (num1 > num3) ? num1 : num3;
	else
		return (num2 > num3) ? num2 : num3;
}

int Minimum(int num1, int num2, int num3)
{
	if (num1 > num2)
		return (num2 > num3) ? num3 : num2;
	else
		return (num1 > num3) ? num3 : num1;
}

int main(void)
{
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("세 개중 가장 큰 수: %d \n", Maximum(num1, num2, num3));
	printf("세 개중 가장 작은 수: %d \n", Minimum(num1, num2, num3));
	return 0;
}

/* Q.2 섭씨 온도를 입력하면 화씨 온도를 반환하는 CelToFah라는 이름의 함수,
그 반대로 화씨 온도를 입력하면 섭씨 온도를 반환하는 FahToCel라는 이름의 함수를 정의,
두 함수를 호출하는 예제 */
double CelToFah(double Cel)
{
	return 1.8 * Cel + 32;
}

double FahToCel(double Fah)
{
	return (Fah - 32) / 1.8;
}

int main()
{
	int sel;
	double num;
	printf("1.섭씨를 화씨로 2. 화씨를 섭씨로 \n선택>> ");	// 둘 중 하나 선택하는 변수, 시스템 생각하는게 중요.
	scanf_s("%d", &sel);

	if (sel == 1)
	{
		printf("섭씨 입력: ");
		scanf_s("%lf", &num);
		printf("변화된 화씨: %f \n", CelToFah(num));	// CelToFah라는 함수에 들어가는 변수를 만드는게 중요.
	}
	else if (sel == 2)
	{
		printf("화씨 입력: ");
		scanf_s("%lf", &num);
		printf("변화된 섭씨: %f \n", FahToCel(num));
	}
	else
		printf("선택 오류 \n");
	return 0;
}

/* Q.3 피보나치 수열 출력하는 함수. 이전 두 값의 합으로 구성 */
int Fibo(int num)
{
	int f1 = 0, f2 = 1, f3, i;
	if (num == 1)
		printf("%d", f1);
	else
		printf("%d %d ", f1, f2);
	for (i = 0; i < num - 2; i++)	// 이런 수식을 세울 수 있어야함.
	{
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;	// 이렇게 앞에 두자리가 뒤로 계속 밀리는 것을 지정하는 아이디어.
	}
}
int main(void)
{
	int n;
	printf("출력하고자 하는 피보나치 수열의 갯수: ");
	scanf_s("%d", &n);
	if (n < 1)
	{
		printf("1이상의 값을 입력하시오. \n");
		return -1;
	}
	else
		Fibo(n);
	return 0;
}