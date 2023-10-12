// 반환값이 없는 함수 : 데이터를 받아서 화면에 출력하는 함수

#include <stdio.h>

void print_char(char ch, int count);

int main() {

	print_char('@', 5);

	return 0;
}

void print_char(char ch, int count) {

	int i;

	for (i = 0; i < count; i++) {
		printf("%c", ch);
	}

	return;
}
