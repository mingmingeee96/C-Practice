#include<stdio.h>

int main ()
{
/*
	// ArrayString.c 예제
	char str[] = "Good morning!";
	printf("배열 str의 크기: %d \n", sizeof(str));
	printf("널 문자 문자형 출력: %c \n", str[13]);
	printf("널 문자 정수형 출력: %d \n", str[13]);

	str[12] = '?';	// 배열 str에 저장된 문자열 데이터 변경 가능
	printf("문자열 출력: %s \n\n", str);

	// 추가
	char nu = '\0';	// 널 문자 저장
	char sp = ' ';	// 공백 문자 저장
	printf("%d %d\n\n", nu, sp);	// '0 32' 출력
*/
	// ReadString.c 예제
	char Str[50];
	int idx = 0;

	printf("문자열 입력: ");
	scanf_s("%s", Str, 50);	// 문자열을 입력 받아서 배열 str에 저장!
	printf("입력 받은 문자열: %s \n", Str);

	printf("문자 단위 출력: ");
	while (Str[idx] != '\0')
	{
		printf("%c", Str[idx]);
		idx++;
	}
	printf("\n\n");

	// StartEndString.c 예제
	int ar1Len, ar2Len;
	char string[] = "I like C programming";
	printf("string: %s \n", string);
	ar1Len = sizeof(string) / sizeof(char);
	printf("%d \n", ar1Len);

	string[8] = '\0';
	printf("string: %s \n", string);
	ar2Len = sizeof(string) / sizeof(char);
	printf("%d \n", ar2Len);

	string[6] = '\0';
	printf("string: %s \n", string);

	string[1] = '\0';
	printf("string: %s \n\n", string);

	/*문제 11-2 
	Q.1 하나의 영단어 입력 받아서 영단어의 길이 계산하여 출력하는 프로그램.*/
/*
	char word[100];
	int len = 0;

	printf("영단어 입력: ");
	scanf_s("%s", word, 100);

	while (word[len] != 0)
		len++;

	printf("영단어의 길이: %d\n\n", len);
*/
	/* Q.2 영단어 입력받아 뒤집어서 출력. (널 문자 위치 조심) */
/*
	char word[100];
	int i, n = 0;
	char rev;

	printf("영단어 입력: ");
	scanf_s("%s", word, 100);

	while (word[n] != '\0')	// 입력된 문자 길이 확인.
		n++;

	for (i = 0; i < n / 2; i++)
	{
		rev = word[i];	// 문자열 뒤집기 위한 빈 문자 배열에 첫문자 저장.
		word[i] = word[(n - i) - 1];	// 맨 뒤에 있는 문자를 첫문자에 저장.
		word[(n - i) - 1] = rev;	// 첫문자 맨 뒤 문자로 저장.
	}

	printf("뒤집힌 영단어: %s \n\n", word);
*/
	/* Q.3 영단어 입력 받고, 아스키 문자 값이 가장 큰 값 출력. */
/*
	char word[100];
	int i = 0, n;
	char asc = 0;

	printf("영단어 입력: ");
	scanf_s("%s", word, 100);

	while (word[i] != 0)
		i++;

	for (n = 0; n < i; n++)
		if (asc < word[n])
			asc = word[n];

	printf("아스키 코드 값이 가장 큰 문자: %c", asc);
*/
	return 0;
}