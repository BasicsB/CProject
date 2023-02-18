#include <stdio.h>

int main4() {

	char name[] = "박세웅";
	int year = 2023;
	int month = 2;
	int day = 18;
	char no = 'f';

	printf("작성자: %s\n", name);
	printf("작성 날짜: %d년-%d월-%d일\n", year, month, day);
	printf("기능: print%c로 문자열 출력\n", no);

	return 0;
}