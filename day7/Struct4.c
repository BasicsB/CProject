#include <stdio.h>
#include <string.h>

struct coffee {
	char origin[30];
	int price;
	char name[30];
};

int main() {
	// 1
	struct coffee person = { "스타벅스", 3000, "홍길동" };
	printf("%s은 %s 커피를 %d원에 판매합니다.\n", person.name, person.origin, person.price);

	return 0;
}