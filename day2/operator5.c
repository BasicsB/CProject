#include <stdio.h>

int main7() {
	// 1	
	int age;
	printf("나이를 입력해 주세요.>>");
	scanf("%d", &age);

	(age >= 20) ? printf("당신의 나이는 %d세이며, 요금은 1250원 입니다.\n", age) : printf("당신의 나이는 %d세이며, 요금은 800원 입니다.\n", age);

	// 2
	int height;
	printf("나이를 입력해 주세요.>>");
	scanf("%d", &age);
	printf("키를 입력해주세요.>>");
	scanf("%d", &height);

	(age >= 12 && height >= 120) ? printf("놀이기구에 탑승할 수 있습니다.\n") : printf("놀이기구에 탑승할 수 없습니다.\n");

	return 0;
}