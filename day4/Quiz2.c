#include <stdio.h>

int main() {
	// 1
	for (int i = 100; i <= 200; i++) {
		if (i % 3 == 0 && i % 7 == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");

	// 2
	int dan1, dan2;
	while (1) {
		printf("2~9 숫자 중 2개의 숫자를 입력하세요>> ");
		scanf("%d, %d", &dan1, &dan2);

		if (dan1 <= 1 || dan2 <= 1) {
			printf("숫자를 다시 입력해주세요.");
			continue;
		}
		else if (dan1 < dan2) {
			for ( ; dan1 <= dan2; dan1++) {
				printf("*** %d단 ***\n", dan1);
				for (int j = 1; j <= 9; j++) {
					printf("%d x %d = %d\n", dan1, j, dan1 * j);
				}
			}
			break;
		}
		else if (dan1 > dan2) {
			for ( ; dan2 <= dan1; dan2++) {
				printf("*** %d단 ***\n", dan2);
				for (int j = 1; j <= 9; j++) {
					printf("%d x %d = %d\n", dan2, j, dan2 * j);
				}
			}
			break;
		}
	}

	return 0;
}