#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1() {
	// 조건문 if: 조건에 따라 내 프로그램을 다르게 동작시켜야 할 때
	int num = 3;

	//삼항 연산자
	(num < 3) ? printf("3보다 작습니다.") : printf("3 이상입니다.");

	// if문
	// if () {}
	// ()안에 있는 조건이 맞을 때 {}에 있는 코드를 실행하는 문법, 만약 틀리면 {}무시
	if (num < 3) {
		// 조건이 맞을때만 실행할 코드
		printf("3보다 작습니다.");
	}

	if (num >= 3) {
		// num이 3보다 크거나 같을때 (맞을때) 만 실행할 코드
		printf("3 이상입니다.");
	}

	if (num == 3) {
		printf("3과 같습니다.");
	}

	int age = 20;
	if (age >= 20) {
		printf("나이가 20 이상입니다.");
	}

	return 0;
}