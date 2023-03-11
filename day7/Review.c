#include <stdio.h>

// 함수를 만드는 법 (함수 정의)
void MyFunction1() {
	printf("Hello");
	printf(", World\n");
}

// 함수를 사용할 때 정해야하는 갓이 있다. : ()를 이용
void MyFunction2(int number) {
	printf("Hello %d\n", number);
}

// 반환값이 있는 함수: return, 자료형
int MyFunction3() {
	return 333;
}

// 매개변수와 return 값이 있는 함수
double MyFunction4(int n1, int n2) {
	double result = (double)n1 / n2;
	return result;
}

int main0() {
		// 함수
		printf("Hello, world!\n");
		MyFunction1(); // 코드를 저장해 놓고 반복사용
		MyFunction1();

		MyFunction2(123);
		printf("\n");
		MyFunction2(456);

		int num1 = MyFunction3();
		num1 = MyFunction3();
		printf("%d\n", num1);
		printf("%d\n", MyFunction3());

		double num2 = MyFunction4(3, 4);
		printf("결과는 %.1lf\n", num2);
		num2 = MyFunction4(9, 3);
		printf("결과는 %.1lf\n", num2);

	return 0;
}