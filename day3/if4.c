#include <stdio.h>

int main() {
	// 2
	//int num = 0;
	//printf("정수를 입력해주세요>>");
	//scanf("%d", &num);

	//if (num % 2 == 0) {
	//	printf("짝수입니다.\n");
	//}
	//else printf("홀수입니다.\n");

	// 3
	//int age;
	//printf("나이를 입력해주세요>>");
	//scanf("%d", &age);

	//if (age < 6 || age >= 65) {
	//	printf("요금은 0원 입니다.\n");
	//}
	//else if (age >= 6 && age < 13) {
	//	printf("요금은 500원 입니다.\n");
	//}
	//else if (age >= 13 && age < 19) {
	//	printf("요금은 900원 입니다.\n");
	//}
	//else if (age >= 19 && age < 65) {
	//	printf("요금은 1250원 입니다.\n");
	//}

	// if ~ else if ~ else

	// 4
	//int score;
	//int avg;
	//int kor = 88, eng = 90, math = 58, soci = 81, sci = 72;
	//score = kor + eng + math + soci + sci;
	//avg = score / 5;

	//// switch는 실수X
	//switch (avg / 10) {
	//case 10:
	//	printf("A학점");
	//	break;
	//case 9:
	//	printf("A학점");
	//	break;
	//case 8:
	//	printf("B학점");
	//	break;
	//case 7:
	//	printf("C학점");
	//	break;
	//case 6:
	//	printf("D학점");
	//	break;
	//default:
	//	printf("F학점");
	//}

	// 윤년 구하는 프로그램
	// 윤년: 년도가 4의 배수이면서, 100의 배수가 아닌것 또는 400의 배수인 년도
	// 2월이 29일로 끝남

	int year;
	printf("연도를 입력하세요>>");
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("해당 연도는 윤년입니다.\n");
	}
	else {
		printf("해당 연도는 윤년이 아닙니다.\n");
	}

	return 0;
}