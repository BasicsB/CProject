#include <stdio.h>

int main3() {
	// if() {}: ()에 있는 조건이 맞을 때만 {}코드 실행
	// if() {} ~ else{}: ()가 맞을 땐 if의 {}실행, 틀릴땐 else {}를 실행

	// 숫자
	// 10보다 작은지,
	// 100보다 작은지,
	// 1000보다 작은지,
	// 1000 이상인지
	int num = 10;
	if (num < 10) {
		printf("10보다 작다\n");
	}
	else if (num < 100) {			// 위에 if가 틀렸을 경우 검사
		printf("100보다 작다\n");
	}
	else if (num < 1000) {			// 위에 if가 틀렸을 경우 검사
		printf("1000보다 작다\n");
	}
	else {			// 다 틀렸을 때
		printf("1000 이상이다\n");
	}
	
	int age = 21;
	if (age > 20) {
		printf("성인\n");
	}
	else if (age >= 14) {
		// else if (){}: 위에 있는 조건이 틀리면 검사
		printf("청소년\n");
	}
	else {
		printf("미성년자\n");
	}

	/*
	if (조건 1) {
		조건 1이 맞을경우 실행
		} else if (조건 2) {
		조건 2가 맞을 경우 실행
		} else if (조건 3) {
		조건 3이 맞을 경우 실행
		} else {
		모든 조건이 틀렸을 때 실행
	}
	*/
	printf("\nQuiz\n");
	int score = 0;
	printf("점수를 입력하세요>>");
	scanf("%d", &score);

	if (score >= 90) {
		printf("A학점");
	}
	else if (score >= 80) {
		printf("B학점");
	}
	else if (score >= 70) {
		printf("C학점");
	}
	else if (score >= 60) {
		printf("D학점");
	}
	else printf("F학점");

	return 0;
}