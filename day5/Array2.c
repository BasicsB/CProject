#include <stdio.h>

int main2() {
	// 배열

	// 배열 초기화
	int numbers[3] = { 1, 2, 3 };
	double dnum[] = { 0.0, 1.0, 2.0 };		// 3칸

	// 문자 배열에 한해서 문자열 문법을 제공
	char str[] = "Hello";		// 6칸
	char ss[] = { 'h', 'e', 'l', 'l', 'o', '\0' };		// 6칸
	// 맨 마지막 \0은 옛날 통신상태가 불안정할 때 완벽히 메시지가 도착했다는 표시로 사용

	printf("%s\n", str);
	printf("%s\n", ss);

	// 배열 선언
	int num[3];
	// 배열 대입
	// {}는 초기화 할때만 사용 가능
	num[0] = 0;
	num[1] = 1;
	num[2] = 2;

	// 배열 초기화
	int nn[3] = { 1, 2, 3 };

	return 0;
}