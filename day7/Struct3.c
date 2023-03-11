#include <stdio.h>
#include <string.h>

struct human {
	char name[30];
	int age;
};

int main3() {
	// 일반 변수를 배열로 만들 수 있듯이
	// 구조체 변수도 배열로 만들 수 있다.
	int numbers[5] = { 1, 2, 3, 4, 5 };
	struct human studyGroup[3] = {
		{"김소년", 12},
		{"유소년", 14},
		{"청소년", 16}
	};

	// 유소년의 나이를 변경하고자 한다.
	studyGroup[1].age = 20;

	// 김소년의 이름을 김소녀로 바꾸고자 한다.
	sprintf(studyGroup[0].name, "%s", "김소녀");

	printf("이름은 %s, 나이는 %d세\n", studyGroup[0].name, studyGroup[0].age);
	printf("이름은 %s, 나이는 %d세\n", studyGroup[1].name, studyGroup[1].age);
	printf("이름은 %s, 나이는 %d세\n", studyGroup[2].name, studyGroup[2].age);

	return 0;
}