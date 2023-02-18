#include <stdio.h>

int main8() {
	// 산술 연산자 +, -, *, /, %
	// 순서대로 더하기, 빼기, 곱하기, 나누기, 나머지 구하기

	// page 74
	int num1 = 7, num2 = 3;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);

	return 0;
}