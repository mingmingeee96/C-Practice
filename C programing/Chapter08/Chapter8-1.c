#include <stdio.h>

int main()
{
	/* ifBsic.c 예제 */
	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);

	if (num < 0)	// num이 0보다 작으면 아래의 문장 실행
		printf("입력 값은 0보다 작다.\n");

	if (num > 0)	// num이 0보다 크면 아래의 문장 실행
		printf("입력 값은 0보다 크다. \n");
	
	if (num == 0)	// num이 0이면 아래의 문장 실행.
		printf("입력 값은 0이다. \n");

	/* CalOne.c 예제 */
	int opt;
	double num1, num2;
	double result = 0.0;

	printf("\n1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
	printf("선택? ");
	scanf_s("%d", &opt);
	printf("두 개의 실수 입력: ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;

	if (opt == 2)
		result = num1 - num2;

	if (opt == 3)
		result = num1 * num2;

	if (opt == 4)
		result = num1 / num2;

	printf("결과: %f \n\n", result);
	
	/* Mul4Mul5.c 예제 */
	num = 0;

	printf("<3 또는 4d의 배수>\n");
	for (num = 1; num < 100; num++)	// 1부터 100까지의 정수 중
	{
		if (num % 3 == 0 || num % 4 == 0)	// 3 또는 4로 나눴을때 나머지가 0이면
			printf("%d ", num);	// 출력!
	}
	printf("\n");

	/* IfElseBasic.c 예제 */
	num = 0;
	printf("정수 입력: ");
	scanf_s("%d", &num);	// num를 입력값으로 초기화

	if (num < 0)	// 0보다 작을시 아래 문장 출력.
		printf("입력 값은 0보다 작다. \n\n");	// 블록에 해당되는 문장이 하나기 때문에 중괄호 생략.
	else  // 위에 조건문에 거짓일시 아래 문장 출력.
		printf("입력 값은 0보다 작지 않다. \n\n");	// 블록에 해당되는 문장이 하나기 때문에 중괄호 생략.

	/* CalTwo.c 예제 */
	opt = 0;
	num1 = 0.0, num2 = 0.0;
	result = 0.0;

	printf("1. 덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈 \n");
	printf("선택: ");
	scanf_s("%d", &opt);
	printf("두 개의 실수 입력: ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)	// 1일때 아래 수식 진행
		result = num1 + num2;
	else if (opt == 2)	// 2일때 아래 수식 진행
		result = num1 - num2;
	else if (opt == 3)	// 3일때 아래 수식 진행
		result = num1 * num2;
	else  // 마지막 선택지일때는 else만 입력!
		result = num1 / num2;

	printf("결과: %f \n\n", result);

	/* ThreeOperand.c 예제 */
	num = 0;
	int abs;
	printf("정수 입력: ");
	scanf_s("%d", &num);

	abs = num > 0 ? num : num * (-1);
	printf("절댓값: %d \n\n", abs);

	/* 
	문제 08-1 Q.1
	1이상 100미만의 정수 중 7, 9의 배수 출력.
	단, 7과 9의 공배수는 한번만 출력!
	*/
	printf("<7과 9의 배수>");
	for (num = 1; num < 100; num++)
		if (num % 7 == 0 || num % 9 == 0)
			printf("%d ", num);
	
	printf("\n");

	/*
	문제 08-1 Q.2 
	두개의 정수를 입력 받아 두 수의 차를 출력하는 프로그램
	단, 무조건 큰 수에서 작은 수 뺀 결과 출력 
	*/

	num1 = 0, num2 = 0, result = 0;
	printf("두 개의 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 <= num2)
		result = num2 - num1;
	else
		result = num1 - num2;

	printf("두 개의 정수 차: %f", result);

	/*
	문제 08-1 Q.3
	학생 성적이 90점 이상시 A, 80점 이상시 B, 70점 이상시 C, 50점 이상시 D, 그 미만은 F
	국어, 영어, 수학 점수 입력 받고 평균을 구한다음에 학점 출력
	*/

	int kor, eng, math;
	double aver;

	printf("\n<성적 입력>\n");
	printf("국어: ");
	scanf_s("%d", &kor);
	printf("영어: ");
	scanf_s("%d", &eng);
	printf("수학: ");
	scanf_s("%d", &math);

	aver = (kor + eng + math) / 3;
	printf("세 과목의 평균: %f \n", aver);

	if (aver >= 90.0)
		printf("성적: A");
	else if (aver >= 80 && aver < 90)
		printf("성적: B");
	else if (aver >= 70 && aver < 80)
		printf("성적: C");
	else if (aver >= 50 && aver < 70)
		printf("성적: D");
	else
		printf("성적: F");

	/*
	문제 08-1 Q.4
	위 Q.2 문제 조건 연산자 사용하여 풀기
	*/

	num1 = 0, num2 = 0, result = 0;
	printf("두 개의 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);

	result = (num1 < num2) ?  num2 - num1 : num1 - num2;

	printf("두 개의 정수 차: %f", result);

	/*
	문제 08-1 Q.추가
	위 Q.3 문제 조건 연산자 사용하여 풀기
	*/

	kor = 0, eng = 0, math = 0, aver = 0.0;

	printf("\n<성적 입력>\n");
	printf("국어: ");
	scanf_s("%d", &kor);
	printf("영어: ");
	scanf_s("%d", &eng);
	printf("수학: ");
	scanf_s("%d", &math);

	aver = (kor + eng + math) / 3;
	printf("세 과목의 평균: %f \n", aver);

	aver >= 90 ? printf("성적: A") :
		aver >= 80 && aver < 90 ? printf("성적: B") :
		aver >= 70 && aver < 80 ? printf("성적: C") :
		aver >= 50 && aver < 70 ? printf("성적: D") : printf("성적: F");

	return 0;
}