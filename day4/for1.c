#include <stdio.h>

int main8() {
	// for��
	// for ( ; ; ) {}
	// while���� �ʹ� ������� �� �� ���� �� �� �ִ� for�� ����

	// while������ 1~10������ �� ���ϱ�
	// while���� 1. �÷��׸� ���� ������ְ� 2. {} �ȿ��� �÷��׸� ���� 3. () �ȿ��� �÷��׸� �˻�
	int number = 0, sum = 0;

	while (number < 10) {
		number++;
		sum += number;
	}
	printf("1~10������ ��: %d\n", sum);

	// for��: () �ȿ��ٰ� �÷��׸� �� ���ƹ�����
	int add = 0;

	for (int i = 1; i <= 10; i++) {
		add += i;			// {} �ȿ��� ���� �ݺ��ϰ��� �ϴ� �ڵ常
	}
	printf("1���� 10������ ��: %d\n", add);

	return 0;
}