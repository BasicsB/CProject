#include <stdio.h>
#include <string.h>

int main3() {
	// 1
	char str1[50] = { 0, };
	char str2[50] = { 0, };
	printf("2개의 문자열을 입력하세요");
	scanf("%[^\n]s", str1);
	rewind(stdin);		// 버퍼 비우기
	scanf("%[^\n]s", str2);

	if (strcmp(str1, str2) == 0) {
		printf("같습니다.\n");
	}
	else printf("다릅니다.\n");

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