#include <stdio.h>
#include <string.h>

struct coffee {
	char origin[30];
	int price;
	char name[30];
};

int main() {
	// 1
	struct coffee person = { "��Ÿ����", 3000, "ȫ�浿" };
	printf("%s�� %s Ŀ�Ǹ� %d���� �Ǹ��մϴ�.\n", person.name, person.origin, person.price);

	return 0;
}