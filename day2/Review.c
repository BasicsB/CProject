#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main0() {
	// 출력 Pprintf
	printf("Hello World\n");
	printf("주석은 //\n");

	// // 한줄 주석 (이 줄은 메모 취급, ctrl + shift + /)
	// /**/ 여러줄 주석
	/*
		안녕하세요
		반갑습니다
		여러줄 주석 입니다
	*/

	// 변수(variable): 저장공간
	// 변수 선언 (변수를 만드는 방법)
	// 자료형 변수명;
	char word;		// 문자형 변수 선언		(8bit == 1byte)
	int number;		// 정수형 변수			(4byte)
	double dNumber; // 실수형 변수			(8byte)
	char str[123] = "asdf";  // 문자열형 변수		(1*100byte)
	
	// 변수 값을 대입 (대입 연산자)
	// 변수명 = 데이터 값;
	word = 'q';
	number = 3;
	dNumber = 3.1414;
	sprintf(str, "hi world");

	// 변수 초기화 (변수 선언과 동시에 대입까지)
	char str2[] = "hello world";

	// 변수 사용
	int number2 = number;		// number에 들어있는 값을 사용 (자료형 없이 적어주기)
	printf("문자형은: %c \n", word);
	printf("정수형은: %d \n", number);
	printf("실수형은: %f \n", dNumber);
	printf("문자열은: %s \n", str2);

	// +,-,*,/,%

	int num1 = 1241;
	int num2 = 155;
	printf("더하기: %d \n", num1 + num2);
	printf("빼기기: %d \n", num1 - num2);
	printf("곱하기: %d \n", num1 * num2);
	printf("나누기: %lf \n", num1 / (double) num2);
	printf("나머지 구하기: %d \n", num1 % num2);


	return 0;
}