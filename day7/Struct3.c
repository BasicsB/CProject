#include <stdio.h>
#include <string.h>

struct human {
	char name[30];
	int age;
};

int main3() {
	// �Ϲ� ������ �迭�� ���� �� �ֵ���
	// ����ü ������ �迭�� ���� �� �ִ�.
	int numbers[5] = { 1, 2, 3, 4, 5 };
	struct human studyGroup[3] = {
		{"��ҳ�", 12},
		{"���ҳ�", 14},
		{"û�ҳ�", 16}
	};

	// ���ҳ��� ���̸� �����ϰ��� �Ѵ�.
	studyGroup[1].age = 20;

	// ��ҳ��� �̸��� ��ҳ�� �ٲٰ��� �Ѵ�.
	sprintf(studyGroup[0].name, "%s", "��ҳ�");

	printf("�̸��� %s, ���̴� %d��\n", studyGroup[0].name, studyGroup[0].age);
	printf("�̸��� %s, ���̴� %d��\n", studyGroup[1].name, studyGroup[1].age);
	printf("�̸��� %s, ���̴� %d��\n", studyGroup[2].name, studyGroup[2].age);

	return 0;
}