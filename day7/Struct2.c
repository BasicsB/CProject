#include <stdio.h>
#include <string.h>

// '���' �̶�� ����ü(����ڰ� ���� �ڷ���)�� ����� �̸�, ���̸� �����ϰԲ� ����
// ����ü: �Լ� �ٱ���
struct person {
	char name[30];		// �ִ� 30��
	int age;
};

int main2() {
	char name[30];
	int age;
	struct person boy;		// �ڷ����� struct person, �������� boy
	struct person girl;

	// �Ϲ� ���� 2��
	sprintf(name, "%s", "ȫ�浿");		// name ������ printf ���·� %s�� ����
	age = 30;
	printf("�̸��� %s, ���̴� %d\n", name, age);

	// ����ü
	sprintf(boy.name, "%s", "��ҳ�");
	sprintf(girl.name, "%s", "�̼ҳ�");

	boy.age = 12;
	girl.age = 9;

	printf("�ҳ��� �̸��� %s, ���̴� %d��\n", boy.name, boy.age);
	printf("�ҳ��� �̸��� %s, ���̴� %d��\n", girl.name, girl.age);

	// ����ü ���� �ʱ�ȭ
	struct person man = { "�̼���", 20 };
	printf("������ �̸��� %s, ���̴� %d��\n", man.name, man.age);

	return 0;
}