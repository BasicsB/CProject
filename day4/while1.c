#include <stdio.h>

int main1() {
	// 반복문 while, for
	// 중복되거나 유사한 코드를 줄이기 위해서
	
	// while () {}
	// 1. 몇번 썼는지 알 수 없다. 일일이 개수를 세야한다.
	// 2. 개수가 너무 많아지면 (10000개 이상) 사람이 작업할 수 없음
	// ==> 반복문 문법을 도입
	char name[] = "이순신";
	printf("%s은 잘생겼다\n", name);
	printf("%s은 잘생겼다\n", name);
	printf("%s은 잘생겼다\n", name);
	printf("%s은 잘생겼다\n", name);
	printf("%s은 잘생겼다\n", name);
	printf("%s은 잘생겼다\n", name);
	printf("%s은 잘생겼다\n", name);

	return 0;
}