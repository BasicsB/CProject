#include <stdio.h>

int main12() {
	// 1
	int n = 0, sum = 0;
	while (1) {
		printf("1�̻��� ������ �Է��ϼ���>>");
		scanf("%d", &n);

		if (n < 0) {
			printf("�ٽ� �Է����ּ���.\n");
			continue;
		}
		else {
			for (int i = 1; i <= n; i++) {
				sum += i;
			}
			printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);
			break;
		}
	}

	printf("\n");

	// 2
	for (int i = 1; i <= 100; i++) {
		if (i % 6 == 0) {
			printf("%d ", i);
		}
	}

	printf("\n");

	// 3
	char word = '\0';
	while (1) {
		printf("���ĺ��� �Է��ϼ���>>");
		rewind(stdin);		// ���� ���� ����
		scanf("%c", &word);

		if (word >= 97 && word <= 122) {
			printf("%c �Է��߽��ϴ�.\n", word);		// 97 == 'a', 122 == 'z'
		}
		else if (word >= 65 && word <= 90) {
			printf("�����մϴ�.\n");			// 65 == 'A', 90 == 'Z'
			break;
		}
	}

	return 0;
}