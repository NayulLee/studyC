// 두 변수의 값을 바꾸며 포인터 이해하기
// 포인터를 사용한 두 변수의 값 교환

#include <stdio.h>

void swap(int* pa, int* pb);

int main() {

	int a = 10, b = 20;

	printf("a : %d, b : %d\n", a, b);
	swap(&a, &b);
	printf("a : %d, b : %d\n", a, b);

	return 0;
}

void swap(int* pa,int *pb) {

	int tmp;

	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}