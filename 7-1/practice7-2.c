// 매개변수가 없는 함수 : 키보드를 수로 입력하면 양수를 반환하는 함수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int get_num(void);

int main() {

	int result = 7;

	result = get_num();
	printf("반환값 : %d\n", result);

	return 0;
}

int get_num(void) {
	int num;

	printf("양수 입력 : ");
	scanf("%d", &num);

	return num;
}