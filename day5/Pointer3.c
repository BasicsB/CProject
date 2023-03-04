#include <stdio.h>

int main7() {
	// 1
	int a = 10;			// 변수 a에 10을 담아서 만들고
	int* p = &a;		// 포인터 변수 p에 a의 주소를 담아 만들고
	*p = 20;			// a의 주소에 들어있는 값을 20으로 변경
	printf("%d", a);	// 20 출력
	*p = 50;			// a의 주소에 들어있는 값을 50으로 변경
	printf("%d", a);	// 50

	// 2
	printf("\n");
	int number = 10;
	int* pnumber = &number;
	printf("주소: %p  값: %d\n", pnumber, *pnumber);

	// 3
	int* ptr;
	int num1 = 5;
	int num2 = 8;

	ptr = &num1;
	printf("%d\n", *ptr);		// 5

	ptr = &num2;
	printf("%d\n", *ptr);		// 8

	// 4
	int n1 = 100, n2 = 200;
	int* ptr1 = &n1, * ptr2 = &n2;
	printf("%d %d\n", *ptr1, *ptr2);		// 100 200

	ptr1 = ptr2;
	ptr2 = &n1;
	printf("%d %d\n", *ptr1, *ptr2);		// 200 100

	return 0;
}