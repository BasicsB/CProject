#include <stdio.h>

int main7() {
	// 1
	int a = 10;			// ���� a�� 10�� ��Ƽ� �����
	int* p = &a;		// ������ ���� p�� a�� �ּҸ� ��� �����
	*p = 20;			// a�� �ּҿ� ����ִ� ���� 20���� ����
	printf("%d", a);	// 20 ���
	*p = 50;			// a�� �ּҿ� ����ִ� ���� 50���� ����
	printf("%d", a);	// 50

	// 2
	printf("\n");
	int number = 10;
	int* pnumber = &number;
	printf("�ּ�: %p  ��: %d\n", pnumber, *pnumber);

	// 3
	int* ptr;
	int num1 = 5;
	int num2 = 8;

	ptr = &num1;
	printf("%d\n", *ptr);		// 5

	ptr = &num2;
	printf("%d\n", *ptr);		// 8

	// 4
	int n1 = 100, n2 = 200;
	int* ptr1 = &n1, * ptr2 = &n2;
	printf("%d %d\n", *ptr1, *ptr2);		// 100 200

	ptr1 = ptr2;
	ptr2 = &n1;
	printf("%d %d\n", *ptr1, *ptr2);		// 200 100

	return 0;
}