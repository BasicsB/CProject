#include <stdio.h>

int main4() {
	// 1
	int num[5] = { 1, 2, 3, 4, 5 };
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += num[i];
	}
	double avg = sum / 5.0;
	printf("����: %d ���: %.1lf\n", sum, avg);

	// 2
	char str[10] = { 0, };		// 10�� ����
	char strr[10] = { 0, };
	int j = 0;
	printf("���� �ܾ� �Է��ϼ���.");
	scanf("%s", str);

	for (int i = 9; i >= 0; i--) {		// 10ĭ�� �����ϸ� 9������ �ִ�.
		if (str[i] == '\0') {
			continue;
		}
		strr[j] = str[i];
		j++;
	}
	printf("%s\n", strr);

	return 0;
}