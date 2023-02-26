#include <stdio.h>

int main12() {
	// 1
	int n = 0, sum = 0;
	while (1) {
		printf("1이상의 정수를 입력하세요>>");
		scanf("%d", &n);

		if (n < 0) {
			printf("다시 입력해주세요.\n");
			continue;
		}
		else {
			for (int i = 1; i <= n; i++) {
				sum += i;
			}
			printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
			break;
		}
	}

	printf("\n");

	// 2
	for (int i = 1; i <= 100; i++) {
		if (i % 6 == 0) {
			printf("%d ", i);
		}
	}

	printf("\n");

	// 3
	char word = '\0';
	while (1) {
		printf("알파벳을 입력하세요>>");
		rewind(stdin);		// 버퍼 문자 제거
		scanf("%c", &word);

		if (word >= 97 && word <= 122) {
			printf("%c 입력했습니다.\n", word);		// 97 == 'a', 122 == 'z'
		}
		else if (word >= 65 && word <= 90) {
			printf("종료합니다.\n");			// 65 == 'A', 90 == 'Z'
			break;
		}
	}

	return 0;
}