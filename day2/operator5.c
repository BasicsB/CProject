#include <stdio.h>

int main7() {
	// 1	
	int age;
	printf("���̸� �Է��� �ּ���.>>");
	scanf("%d", &age);

	(age >= 20) ? printf("����� ���̴� %d���̸�, ����� 1250�� �Դϴ�.\n", age) : printf("����� ���̴� %d���̸�, ����� 800�� �Դϴ�.\n", age);

	// 2
	int height;
	printf("���̸� �Է��� �ּ���.>>");
	scanf("%d", &age);
	printf("Ű�� �Է����ּ���.>>");
	scanf("%d", &height);

	(age >= 12 && height >= 120) ? printf("���̱ⱸ�� ž���� �� �ֽ��ϴ�.\n") : printf("���̱ⱸ�� ž���� �� �����ϴ�.\n");

	return 0;
}