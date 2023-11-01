// 포인터 : 변수의 메모리 주소를 저장하는 변수

#include <stdio.h>

int main() {
	int a;
	int* pa;

	pa = &a;
	*pa = 10;

	printf("포인터로 a값 출력 : %d\n", *pa);
	printf("변수명으로 a값 출력 : %d\n", a);

	return 0;
}