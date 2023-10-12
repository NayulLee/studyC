// 매개변수와 반환값이 모두 없는 함수 : 일정한 문자열을 여러 번 출력하는 함수
#include <stdio.h>

void print_line(void);

int main() {

	print_line();
	printf("학번\t이름\t전공\t학점\n");
	print_line();

	return 0;
}

void print_line(void) {

	int i;
	for (i = 0; i < 50; i++) {
		printf("-");
	}
	printf("\n");
}
