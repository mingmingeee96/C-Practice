#include <stdio.h>

int main()
{
	int num1 = 9, num2 = 2;
	printf("%d+%d=%d \n", num1, num2, num1 + num2);
	printf("%d-%d=%d \n", num1, num2, num1 - num2);
	printf("%dx%d=%d \n", num1, num2, num1 * num2);
	printf("%d/%d의 몫=%d \n", num1, num2, num1 / num2);
	printf("%d/%d의 나머지=%d \n\n", num1, num2, num1 % num2);	//  03-2 예제1

	int num3 = 2, num4 = 4, num5 = 6;
	num3 += 3;	// num3 = num3 + 3
	num4 *= 4;	// num4 = num4 x 4
	num5 %= 5;	// num5 = num5 % 5
	printf("Result: %d, %d, %d \n\n", num3, num4, num5);	// 03-2 예제2

	int num6 = +2;	// num6 양의 정수
	int num7 = -4;	// num7 음의 정수

	num6 = -num6;
	printf("num6: %d \n", num6);
	num7 = -num7;
	printf("num7: %d \n\n", num7);	// 03-2 예제3

	int num8 = 12;
	int num9 = 12;

	printf("num8: %d \n", num8);
	printf("num8++: %d \n", num8++);	// 후위증가
	printf("num8: %d \n", num8);	// 출력된 값에 증가된 값
	printf("++num8: %d \n\n", ++num8);	// 전위증가 → 바로 연산

	printf("num9: %d \n", num9);
	printf("--num9: %d \n", --num9);	// 전위감소
	printf("num9: %d \n", num9);	// 감소된 값의 출력
	printf("num9--: %d \n\n", num9--);	// 후위감소 → 우선 출력	// 03-2 예제4

	int num10 = 10;
	int num11 = (num10--) + 2;	// 후위 감소 → num10을 우선 10으로 출력

	printf("num10: %d \n", num10);	// 위에서 선 출력 했으니 연산된 값인 9로 나타남.
	printf("num11: %d \n\n", num11);	// 위에서 num10을 10으로 인식했으니 그 연산 값인 12로 나타남.	// 03-2 예제5

	int num12 = 10;
	int num13 = 12;
	int result1, result2, result3;

	result1 = (num12 == num13);
	result2 = (num12 <= num13);
	result3 = (num12 > num13);

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n\n", result3);	// 03-2 예제6

	int num14 = 10;
	int num15 = 12;
	int result4, result5, result6;

	result4 = (num14 == 10 && num15 == 12);
	result5 = (num14 < 12 || num15>12);
	result6 = (!num14);

	printf("result1: %d \n", result4);
	printf("result2: %d \n", result5);
	printf("result3: %d \n\n", result6);	// 03-2 예제7

	int num16 = 1, num17 = 2;
	printf("Hello "), printf("world! \n");
	num16++, num17++;
	printf("%d ", num16), printf("%d ", num17), printf("\n");

	return 0;
}
