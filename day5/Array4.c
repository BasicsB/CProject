#include <stdio.h>

int main4() {
	// 1
	int num[5] = { 1, 2, 3, 4, 5 };
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += num[i];
	}
	double avg = sum / 5.0;
	printf("총합: %d 평균: %.1lf\n", sum, avg);

	// 2
	char str[10] = { 0, };		// 10개 선언
	char strr[10] = { 0, };
	int j = 0;
	printf("영어 단어 입력하세요.");
	scanf("%s", str);

	for (int i = 9; i >= 0; i--) {		// 10칸을 선언하면 9개까지 있다.
		if (str[i] == '\0') {
			continue;
		}
		strr[j] = str[i];
		j++;
	}
	printf("%s\n", strr);

	return 0;
}