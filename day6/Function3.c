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
	printf("���ϱ�: %d\n", n1 + n2);
	printf("����: %d\n", n1 - n2);
	printf("���ϱ�: %d\n", n1 * n2);
	printf("������: %d\n", n1 / n2);
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
	//int result;			// ����� ������ ����

	//result = getBigger(3, 5);		// 3�� 5�� ��
	//printf("ù��° ���: %d\n", result);

	//result = getBigger(8, 2);		// 8�� 2�� ��
	//printf("�ι�° ���: %d\n", result);

	//result = getBigger(4, 4);		// 4�� 4�� ��
	//printf("����° ���: %d\n", result);

	// 1
	calculator(10, 5);

	// 2
	int sum = total(1, 10);
	printf("�հ�: %d\n", sum);

	// 3
	printf("7�� ����� ����: %d\n", count(100));

	// 4
	int height = 0;
	printf("Ű�� �Է��ϼ���: ");
	scanf("%d", &height);

	double m = convert(181);
	printf("m������ Ű: %.2lf\n", m);

	// 5
	int second = 0;
	printf("�ʸ� �Է��ϼ���: ");
	scanf("%d", &second);

	int hour = hourr(second);
	int rMinute = minute(second);
	int rSecond = secondd(second);

	printf("%d�� %d�� %d��", hour, rMinute, rSecond);

	return 0;
}


// 4
// ����ڷκ��� Ű�� �Է¹޾� m������ ��ȯ�ϴ� �Լ� ���� Ű scanf �Է��� main�Լ����� �����ϰ�
// ������ �Լ������� �Ű������� �޾� m������ ��ȯ

// Ű�� cm������ �Է��ϼ���: 181cm
// ��� 1.81m


// 5
// �ʸ� �Է¹޾� �Ű������� �����Ѵ�
// �Լ��� ���޹��� �ʸ� ��/��/�� ���·� ������ֱ�

// ��: 3615