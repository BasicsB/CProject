#include <stdio.h>

int main() {
	int kor = 50, eng = 40, math = 60;
	int sum = kor + eng + math;
	double avg = (double) sum / 3;

	printf("�հ�: %d\n", sum);
	printf("���: %.1lf\n", avg);

	return 0;
}