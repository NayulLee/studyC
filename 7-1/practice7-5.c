// 재귀호출 함수 : apple을 출력하는 재귀 호출 함수

#include <stdio.h>

void fruit(void);

int main(void) {
	fruit();

	return 0;
}

void fruit(void) {
	printf("apple\n");
	fruit();
}