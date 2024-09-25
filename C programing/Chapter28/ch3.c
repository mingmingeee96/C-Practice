/*도전3
복소수(Complex Number)를 나타내는 구조체를 정의하고, 복소수의 덧셈과 곱셈을 위한 함수를 각각 정의하자. 
그리고 이를 기반으로 프로그램 사용자로부터 두 개의 복소수 정보를 입력 받아서 두 복소수의 덧셈과 곱셈의 결과를 출력하는 프로그램을 작성하자.

- 실행 예시
복소수 입력1[실수 허수]: 1.2 2.4
복소수 입력2[실수 허수]: 1.1 2.2
합의 결과] 실수: 2.300000, 허수: 4.600000
곱의 결과] 실수: -3.960000, 허수: 5.280000
*/

#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} ComplexNumber;

ComplexNumber addComplexNumbers(ComplexNumber num1, ComplexNumber num2)
{
    ComplexNumber result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

ComplexNumber multiplyComplexNumbers(ComplexNumber num1, ComplexNumber num2)
{
    ComplexNumber result;
    result.real = num1.real * num2.real - num1.imaginary * num2.imaginary;
    result.imaginary = num1.real * num2.imaginary + num1.imaginary * num2.real;
    return result;
}

int main()
{
    ComplexNumber num1, num2, sum, mul;
    printf("복소수 입력1[실수 허수]: ");
    scanf("%lf %lf", &num1.real, &num1.imaginary);
    printf("복소수 입력2[실수 허수]: ");
    scanf("%lf %lf", &num2.real, &num2.imaginary);
    
    sum = addComplexNumbers(num1, num2);
    mul = multiplyComplexNumbers(num1, num2);
    
    printf("합의 결과] 실수: %.5lf, 허수: %.5lf\n", sum.real, sum.imaginary);
    printf("곱의 결과] 실수: %.5lf, 허수: %.5lf\n", mul.real, mul.imaginary);
    
    return 0;
}