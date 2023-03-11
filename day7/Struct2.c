#include <stdio.h>
#include <string.h>

// '사람' 이라는 구조체(사용자가 만든 자료형)를 만들고 이름, 나이를 저장하게끔 정의
// 구조체: 함수 바깥에
struct person {
	char name[30];		// 최대 30자
	int age;
};

int main2() {
	char name[30];
	int age;
	struct person boy;		// 자료형은 struct person, 변수명은 boy
	struct person girl;

	// 일반 변수 2개
	sprintf(name, "%s", "홍길동");		// name 변수에 printf 형태로 %s를 넣음
	age = 30;
	printf("이름은 %s, 나이는 %d\n", name, age);

	// 구조체
	sprintf(boy.name, "%s", "김소년");
	sprintf(girl.name, "%s", "이소녀");

	boy.age = 12;
	girl.age = 9;

	printf("소년의 이름은 %s, 나이는 %d세\n", boy.name, boy.age);
	printf("소녀의 이름은 %s, 나이는 %d세\n", girl.name, girl.age);

	// 구조체 변수 초기화
	struct person man = { "이순신", 20 };
	printf("남자의 이름은 %s, 나이는 %d세\n", man.name, man.age);

	return 0;
}