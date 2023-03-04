#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main0() {
	// 제어문: 조건문, 반복문, 기타제어문
	// 제어문: 원래 코드는 위에서 아래로 왼쪽에서 오른쪽으로 진행되지만 그 흐름을 바꿀 수 있는 문법
	// if, switch, for, while, do-while, break, continue, goto

	// 조건문 if~else if~else
	// if() {}: ()에는 조건식을, {}에는 조건식이 맞을때만 실행할 코드를 적으면 됨
	int target = 5;
	if (target == 5) {
		printf("5는 5와 같다.\n");
	}
	else if (target != 5) {
		printf("5는 5와 같지 않다.\n");
	}
	else {
		printf("모르겠다.\n");
	}

	printf("\n");

	// 조건문 switch~case~break
	// switch() {}: ()내용과 case의 내용이 같은 부분부터 코드 실행
	switch (target) {
	case 1:
		printf("대상은 1과 같다.\n");
		break;
	case 5:
		printf("대상은 5와 같다.\n");
		break;
	default:
		printf("대상과 같은 값이 없다.\n");
	}

	printf("\n");

	// 반복문 while
	// while은 플래그 i가 필요하고 중복 코드를 관리
	int i = 0;
	while (i < 3) {
		printf("반복횟수 %d번\n", i + 1); // i보다 1 더 큰 숫자 출력
		i++; // 변수 i에 들어있는 값을 1 증가시킴 (i = i + 1)
	}

	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("반복횟수 %d회\n", i + 1);	// 반복하고자 하는 코드만 남음
	}

	printf("\n");
	 
	// 기타 제어문 continue, break
	// break: 반복문을 종료 (switch 종료)
	// continue: 반복문 처음 ()으로 돌아감 (1회성 취소)
	for (int i = 0; i < 3; i++) {
		if (i == 2) {
			break;		// i가 2일때 반복문이 종료
		}
	}

	printf("\n");

	for (int i = 0; i < 3; i++) {
		if (i == 1) {
			continue;		// continue보다 밑에 있는 코드는 무시하고 위로 올라감
		}
	}

	return 0;
}