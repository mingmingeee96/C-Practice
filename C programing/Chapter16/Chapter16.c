#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// TwoDimArraySize.c 예제
/*
int main()
{
	int arr1[3][4];
	int arr2[7][9];
	printf("세로3, 가로4: %d \n", sizeof(arr1));
	printf("세로7, 가로9: %d \n", sizeof(arr2));

	return 0;
}
*/

// PopuResarch.c 예제
/*
int main()
{
	int villa[4][2];
	int popu, i, j;

	// 가구별 거주인원 입력 받기
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d층 %d호 인구수: ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	}

	// 빌라의 층별 인구수 출력하기
	for (i = 0; i < 4; i++)
	{
		popu = 0;
		popu += villa[i][0];
		popu += villa[i][1];
		printf("%d층 인구수: %d \n", i + 1, popu);
	}

	return 0;
}
*/
// TwoDimArrayAddr.c 예제
/*
int main()
{
	int arr[3][2];
	int i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			printf("%p \n", &arr[i][j]);
	return 0;
}
*/
// TwoDimArrayInit.c 예제
/*
int main()
{
	int i, j;

	// 2차원 배열 초기화 예시 1
	int arr1[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9,}
	};

	// 2차원 배열 초기화 예시 2
	int arr2[3][3] = {
		{1},
		{4,5},
		{7,8,9}
	};

	// 2차원 배열 초기화 예시 3
	int arr3[3][3] = { 1,2,3,4,5,6,7 };

	for (i = 0; i < 3; i++)
	{
		for(j=0;j<3;j++)
			printf("%d ", arr1[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", arr2[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", arr3[i][j]);
		printf("\n");
	}
	return 0;
}
*/
// 문제 16-1
// 문제 1
/*
int main()
{
	int i, j;
	int arr[3][9];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
		{
			arr[i][j] = (i + 2) * (j + 1);
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
// 문제 2
/*
int main()
{
	int arr_a[2][4] = { 1,2,3,4,5,6,7,8 };
	int arr_b[4][2];
	printf("<배열 A>\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%d ", arr_a[i][j]);
		printf("\n");
	}
	printf("\n<배열 B>\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			arr_b[i][j] = arr_a[j][i];
			printf("%d ", arr_b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
// 문제 3
/*
int main()
{
	int arr[5][5] = { 0, };

	// 각 학생별로 성적 입력받기.
	printf("철희 성적 입력 (국어-영어-수학-국사 순으로): ");
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &arr[0][i]);
	}
	printf("철수 성적 입력 (국어-영어-수학-국사 순으로): ");
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &arr[1][i]);
	}
	printf("영희 성적 입력 (국어-영어-수학-국사 순으로): ");
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &arr[2][i]);
	}
	printf("영수 성적 입력 (국어-영어-수학-국사 순으로): ");
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &arr[3][i]);
	}

	// 과목별 총점 입력
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			arr[4][i] += arr[j][i];

	// 개인별 총점 입력
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 4; j++)
			arr[i][4] += arr[i][j];

	// 출력
	printf("<성적 관리 프로그램>\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%3d ", arr[i][j]);
		printf("\n");
	};
	return 0;
}
*/
// ThreeDimArraySize.c 예제
/*
int main()
{
	int arr1[2][3][4];
	double arr2[5][5][5];
	printf("높이2, 세로3, 가로4 int형 배열: %d \n", sizeof(arr1));
	printf("높이5, 세로5, 가로5 double형 배열: %d \n", sizeof(arr2));
	return 0;
}
*/
// ThreeDimArrayAccess.c 예제

int main()
{
	int mean = 0, i, j;
	int record[3][3][2] = {
		{
			{70, 80},	// A 학급 학생 1의 성적
			{94, 90},	// A 학급 학생 2의 성적
			{70, 85},	// A 학급 학생 3의 성적
		},
		{
			{83, 90},	// B 학급 학생 1의 성적
			{95, 60},	// B 학급 학생 2의 성적
			{90, 82},	// B 학급 학생 3의 성적
		},
		{
			{98, 89},	// C 학급 학생 1의 성적
			{99, 94},	// C 학급 학생 2의 성적
			{91, 87}	// C 학급 학생 3의 성적
		}
	};

	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[0][i][j];
	printf("A 학급 전체 평균: %g \n", (double)mean / 6);

	mean = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[1][i][j];
	printf("B 학급 전체 평균: %g \n", (double)mean / 6);

	mean = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[2][i][j];
	printf("C 학급 전체 평균: %g \n", (double)mean / 6);
	
	return 0;
}
