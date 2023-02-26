#include <stdio.h>

int main7() {
	// while 문으로 1~10까지의 합 구하기
	int number = 0;
	int sum = 0;

	while (number < 10) {
		number++;
		sum += number;
	}
	printf("1~10까지의 합: %d\n", sum);

	return 0;
}