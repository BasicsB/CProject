#include <stdio.h>
#include <string.h>

int main3() {
	// 1
	char str1[50] = { 0, };
	char str2[50] = { 0, };
	printf("2���� ���ڿ��� �Է��ϼ���");
	scanf("%[^\n]s", str1);
	rewind(stdin);		// ���� ����
	scanf("%[^\n]s", str2);

	if (strcmp(str1, str2) == 0) {
		printf("�����ϴ�.\n");
	}
	else printf("�ٸ��ϴ�.\n");

	// 2
	if (strlen(str1) > strlen(str2)) {
		printf("%s\n", str1);
		printf("%s\n", str2);
	}
	else {
		printf("%s\n", str2);
		printf("%s\n", str1);
	}

	return 0;
}