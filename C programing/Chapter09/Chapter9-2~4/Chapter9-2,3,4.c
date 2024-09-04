#include <stdio.h>
/* 09-2 시작
LocalVariable.c 예제 */
int SimpleFuncOne()
{
	int num = 10;	// 이후부터 SimpleFuncOne의 num 유효
	num++;
	printf("SimpleFuncOne Num: %d \n", num);
	return 0;	// SimpleFuncOne 의 num이 유효한 마지막 문장. 이후 num 메모리 소멸
}

int SimpleFuncTwo()
{
	int num1 = 20;	// 이후부터 num1 유효.
	int num2 = 30;	// 이후부터 num2 유효.
	num1++, num2--;
	printf("num1 & num2: %d %d \n", num1, num2);
	return 0;	// num1, num2 유효한 마지막 문장. 이후 메모리 소멸
}

int main()
{
	int num = 17;	// 이후부터 main의 num 유효
	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main num: %d \n", num);
	return 0;	// main의 num이 유효한 마지막 문장. 소멸
}

/* AnotherLocalVal.c 예제 */
int main()
{
	int cnt;
	for (cnt = 0; cnt < 3; cnt++)
	{
		int num = 0;
		num++;
		printf("%d번째 반복, 지역변수 num은 %d. \n", cnt + 1, num);
	}
	if (cnt == 3)
	{
		int num = 7;
		num++;
		printf("if문 내에 존재하는 지역변수 num은 %d. \n", num);
	}
	return 0;
}

/* LocalValHideVal.c 예제 */
int main()
{
	int num = 1;
	if (num == 1)
	{
		int num = 7;	// 이 행 주석 처리시 출력 : 11, 11 / 냅둘시 출력: 17, 1
		num += 10;
		printf("if문 내 지역변수 num: %d \n", num);
	}
	printf("main 함수 내 지역변수 num: %d \n", num);
	return 0;
}

/* 09-3 시작 
GlobalVariable.c 예제 */
void Add(int val);
int num;	// 전역변수는 기본 0으로 초기화 됨.

int main()
{
	printf("num: %d \n", num);
	Add(3);
	printf("num: %d \n", num);
	num++;	// 전역변수 num의 값 1 증가
	printf("num: %d \n", num);
	return 0;
}
void Add(int val)
{
	num += val;	// 전역 변수 num의 값 val만큼 증가
}

/* LocalValHideGlovalVal.c 예제 */
int Add(int val);
int num = 1;

int main()
{
	int num = 5;	// 지역 변수 num 선언 및 초기화
	printf("num: %d \n", Add(3));	// Add 함수에 3 대입하여 반환된 값 입력. (12)
	printf("num: %d \n", num + 9);	// 5에 9 더한 값 출력. (14)
	return 0;
}
int Add(int val)
{
	int num = 9;	// Add 함수 내에서 지역변수 num 선언 및 초기화.
	num += val;
	return num;

}

/* StaticLocalVariable.c 예제 */
void SimpleFunc()
{
	static int num1 = 0;	// 초기화 하지 않으면 0으로 초기화
	int num2 = 0;	// 초기화하지 않으면 쓰레기 값 초기화
	num1++, num2++;	
	/*아래 main 함수내 반복문 때문에 이 함수가 다시 실행될때 static변수인 num1은 1더한 값이 메모리에 남아 1, 2, 3으로 출력되고
	num2는 SimpleFunc 함수 내에만 있는 지역변수라 다시 실행될때는 0값이 들어가서 매번 1이라는 출력값이 나온다.*/ 
	printf("static: %d, local: %d \n", num1, num2);
}

int main()
{
	int i;
	for (i = 0; i < 3; i++)
		SimpleFunc();
	return 0;
}

/* 문제09-2 전역변수 → static변수*/
int AddToTotal(int num)
{
	static int total;
	total += num;
	return total;
}
int main()
{
	int num, i;
	for (i = 0; i < 3; i++)	// 0,1,2 총 3번 반복
	{
		printf("입력%d: ", i + 1);
		scanf_s("%d", &num);	// 기존 저장되어 있던 값 0 출력, 이후 사용자가 입력한 값
		printf("누적: %d \n", AddToTotal(num));
	}
	return 0;
}

/* 09-4
RecursiveFunc.c 예제 */
void Recursive(int num)
{
	if (num <= 0)	// 재귀의 탈출 조건
		return;	// 재귀의 탈출!
	printf("Recursive Call! %d \n", num);
	Recursive(num - 1);
}
int main()
{
	Recursive(3);
	return 0;
}

/*RecursiveFactorial.c 예제*/
int Factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);
}

int main()
{
	printf("1! = %d \n", Factorial(1));
	printf("2! = %d \n", Factorial(2));
	printf("3! = %d \n", Factorial(3));
	printf("4! = %d \n", Factorial(4));
	printf("9! = %d \n", Factorial(9));
	return 0;
}