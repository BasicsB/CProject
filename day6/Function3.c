#include <stdio.h>

int getBigger(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	else if (n1 < n2) {
		return n2;
	}
	else return 0;
}

void calculator(int n1, int n2) {
	printf("더하기: %d\n", n1 + n2);
	printf("빼기: %d\n", n1 - n2);
	printf("곱하기: %d\n", n1 * n2);
	printf("나누기: %d\n", n1 / n2);
}

int total(int n1, int n2) {
	int sum = 0;
	for (; n1 <= n2; n1++) {
		sum += n1;
	}
	return sum;
}

int count(int n1) {
	int count = 0;
	int i = n1;
	for (; n1 <= i + 200; n1++) {
		if (n1 % 7 == 0) {
			count++;
		}
	}
	return count;
}

double convert(int height) {
	return height / 100.0;
}

int hourr(int s) {
	return s / 60 / 60;
}

int minute(int s) {
	int m = s / 60;
	int rm = m % 60;
	return rm;
}

int secondd(int s) {
	return s % 60;
}

int main() {
	//int result;			// 결과를 저장할 변수

	//result = getBigger(3, 5);		// 3과 5를 비교
	//printf("첫번째 결과: %d\n", result);

	//result = getBigger(8, 2);		// 8과 2를 비교
	//printf("두번째 결과: %d\n", result);

	//result = getBigger(4, 4);		// 4와 4를 비교
	//printf("세번째 결과: %d\n", result);

	// 1
	calculator(10, 5);

	// 2
	int sum = total(1, 10);
	printf("합계: %d\n", sum);

	// 3
	printf("7의 배수의 개수: %d\n", count(100));

	// 4
	int height = 0;
	printf("키를 입력하세요: ");
	scanf("%d", &height);

	double m = convert(181);
	printf("m단위의 키: %.2lf\n", m);

	// 5
	int second = 0;
	printf("초를 입력하세요: ");
	scanf("%d", &second);

	int hour = hourr(second);
	int rMinute = minute(second);
	int rSecond = secondd(second);

	printf("%d시 %d분 %d초", hour, rMinute, rSecond);

	return 0;
}


// 4
// 사용자로부터 키를 입력받아 m단위로 반환하는 함수 정의 키 scanf 입력은 main함수에서 진행하고
// 정의한 함수에서는 매개변수로 받아 m단위로 반환

// 키를 cm단위로 입력하세요: 181cm
// 결과 1.81m


// 5
// 초를 입력받아 매개변수로 전달한다
// 함수는 전달받은 초를 시/분/초 형태로 출력해주기

// 초: 3615