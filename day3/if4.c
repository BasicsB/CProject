#include <stdio.h>

int main() {
	// 2
	//int num = 0;
	//printf("������ �Է����ּ���>>");
	//scanf("%d", &num);

	//if (num % 2 == 0) {
	//	printf("¦���Դϴ�.\n");
	//}
	//else printf("Ȧ���Դϴ�.\n");

	// 3
	//int age;
	//printf("���̸� �Է����ּ���>>");
	//scanf("%d", &age);

	//if (age < 6 || age >= 65) {
	//	printf("����� 0�� �Դϴ�.\n");
	//}
	//else if (age >= 6 && age < 13) {
	//	printf("����� 500�� �Դϴ�.\n");
	//}
	//else if (age >= 13 && age < 19) {
	//	printf("����� 900�� �Դϴ�.\n");
	//}
	//else if (age >= 19 && age < 65) {
	//	printf("����� 1250�� �Դϴ�.\n");
	//}

	// if ~ else if ~ else

	// 4
	//int score;
	//int avg;
	//int kor = 88, eng = 90, math = 58, soci = 81, sci = 72;
	//score = kor + eng + math + soci + sci;
	//avg = score / 5;

	//// switch�� �Ǽ�X
	//switch (avg / 10) {
	//case 10:
	//	printf("A����");
	//	break;
	//case 9:
	//	printf("A����");
	//	break;
	//case 8:
	//	printf("B����");
	//	break;
	//case 7:
	//	printf("C����");
	//	break;
	//case 6:
	//	printf("D����");
	//	break;
	//default:
	//	printf("F����");
	//}

	// ���� ���ϴ� ���α׷�
	// ����: �⵵�� 4�� ����̸鼭, 100�� ����� �ƴѰ� �Ǵ� 400�� ����� �⵵
	// 2���� 29�Ϸ� ����

	int year;
	printf("������ �Է��ϼ���>>");
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("�ش� ������ �����Դϴ�.\n");
	}
	else {
		printf("�ش� ������ ������ �ƴմϴ�.\n");
	}

	return 0;
}