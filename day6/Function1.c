#include <stdio.h>

// �Լ� add
int add(int n1, int n2) {
	return n1 + n2;
}

int AbsAdd(int n1, int n2) {
	if (n1 < 0) {
		n1 *= -1;
	}
	if (n2 < 0) {
		n2 *= -1;
	}
	return n1 + n2;
}

int main4() {
	// �Լ�: ���� ��ȣ�� �Ѱ谡 ������ ����ڰ� ���� ����� ������, �ڵ带 �����ϴ� ���
	// () {}
	
	// +, -, /, *, %: ������ ��ɵ��� ����, ���� ����
	int num1 = -3 + 5;		// ���� ���ϴ°� ������ ���ش��� ���ϴ� ���� ���Ѵ�.
	printf("%d\n", num1);

	// ���� ���� ���ϱ⸦ ������
	int num2 = add(-3, 5);
	printf("%d\n", num2);

	// ���밪���� ����� �����ִ� ����� ������
	int num3 = AbsAdd(-3, 5);
	printf("%d\n", num3);		// 8

	AbsAdd(1, 2);
	AbsAdd(4, -2);
	AbsAdd(-23, -33);

	return 0;
}