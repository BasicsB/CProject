#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main0() {
	// ��� Pprintf
	printf("Hello World\n");
	printf("�ּ��� //\n");

	// // ���� �ּ� (�� ���� �޸� ���, ctrl + shift + /)
	// /**/ ������ �ּ�
	/*
		�ȳ��ϼ���
		�ݰ����ϴ�
		������ �ּ� �Դϴ�
	*/

	// ����(variable): �������
	// ���� ���� (������ ����� ���)
	// �ڷ��� ������;
	char word;		// ������ ���� ����		(8bit == 1byte)
	int number;		// ������ ����			(4byte)
	double dNumber; // �Ǽ��� ����			(8byte)
	char str[123] = "asdf";  // ���ڿ��� ����		(1*100byte)
	
	// ���� ���� ���� (���� ������)
	// ������ = ������ ��;
	word = 'q';
	number = 3;
	dNumber = 3.1414;
	sprintf(str, "hi world");

	// ���� �ʱ�ȭ (���� ����� ���ÿ� ���Ա���)
	char str2[] = "hello world";

	// ���� ���
	int number2 = number;		// number�� ����ִ� ���� ��� (�ڷ��� ���� �����ֱ�)
	printf("��������: %c \n", word);
	printf("��������: %d \n", number);
	printf("�Ǽ�����: %f \n", dNumber);
	printf("���ڿ���: %s \n", str2);

	// +,-,*,/,%

	int num1 = 1241;
	int num2 = 155;
	printf("���ϱ�: %d \n", num1 + num2);
	printf("�����: %d \n", num1 - num2);
	printf("���ϱ�: %d \n", num1 * num2);
	printf("������: %lf \n", num1 / (double) num2);
	printf("������ ���ϱ�: %d \n", num1 % num2);


	return 0;
}