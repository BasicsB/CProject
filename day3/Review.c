/* 2023-02-25 C언어 전날 리뷰 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main0() {
	// 변수: 저장공간 (자주 사용되거나 변경될 것 같은 값은 미리 저장해 놓는다. 추후 업데이트를 위해)
	char a = 'a';			// 문자 type		(1칸 ~256)
	short bb = 0;			// 정수형 ""		(2칸 ~65536)
	int b = 1;				// 정수형 ""		(4칸 ~42억) -21억~21억
	unsigned int u_b = 0u;	// 정수형 ""		(4칸 ~42억) 0~42억: 음수를 없애고 범위를 늘린다. (insigned)
	long long bbb = 0l;		// 정수형 ""		(8칸)
	double c = 3.4;			// 실수형 ""		(8칸)
	float d =  1.3f;		// ""			(4칸)
	char str[123] = { 0, }; // 123개 모두에 0을 넣겠다는 의미

	// 변수 선언, 대입, 초기화, 사용
	int g;
	g = 0;
	int gg = 1;
	gg;

	// 출력과 입력
	printf("값을 입력하세요>>");
	scanf("%d", &gg);
	printf("입력값은 %d\n", gg);

	// 대입 연산자 =
	// 산술 연산자 +, -, *, /, %
	// 누적 연산자 +=, -=, *=, /=, %=
	// 증감 연산자 ++, --
	// 비교 연산자 ==, !=, >, >=, <, <=
	// 관계 연산자 &&, ||, !
	// 삼항 연산자 (조건식) ? 맞으면 : 틀리면;
	// 변수 = (조건식) ? 맞으면 저장할 값 : 틀리면 저장할 값;

	return 0;
}