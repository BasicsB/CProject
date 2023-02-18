#include <stdio.h>

int main3() {
	// 변수에는 종류가 있다. (자료형)
	// 문자, 정수, 실수, 문자열 변수

	// 문자 변수(한 글자)		// 특수 문자 사용할 때
	char one = 'A';						// %c

	// 정수 변수 (그냥 숫자)
	int number1 = 123;					// %d

	// 실수 변수 (소수점 있는 숫자)
	double number2 = 3.14;				// %lf

	// 문자열 변수 (여러글자)			// %s
	char multi[100] = "99글자까지 저장 가능합니다.";	

	// 뭐하러 이런걸 구분해놓아서 피곤하게 하나
	// 자료형 사용의 이유
	// 1. 개발자의 의도를 명확하게 전달
	// 2. 개발자의 실수를 컴파일러가 검출해내기 위해 (이 이유가 가장 큼)
	// 3. 자료형마다 공간의 크기가 다름 (최적화)

	char 변수1[] = "34 - 2";
	int 변수2 = 34 - 2;

	return 0;
}