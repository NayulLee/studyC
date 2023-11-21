/* 도전 실전 예제 -  전역 변수 교환 프로그램
   2개의 전역 변수에 값을 입력하고 교환한 후에 출력하는 프로그램을 작성합니다.
   입력, 교환, 출력 작업은 다음에 제시된 함수 원형을 지켜 작성합니다
   */
#include <stdio.h>

void input_data(int* pa, int* pb);
void swap_data(void);
void print_data(int a, int b);

int a, b;

int main() {

	input_data(&a, &b);
	swap_data();
	print_data(a, b);

	return 0;

}

void input_data(int* pa, int* pb) {

	printf("두 정수 입력 : ");
	scanf_s("%d %d", pa, pb);

}

void swap_data() {
	
	int temp;
	temp = a;
	a = b;
	b = temp;
	
}

void print_data(int a, int b) {

	printf("a값 : %d\n", a);
	printf("b값 : %d\n", b);

}