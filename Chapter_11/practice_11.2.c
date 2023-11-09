// 공백이나 제어 문자의 입력
#include <stdio.h>

int main() {

	char ch1, ch2;

	scanf_s("%c%c", &ch1, &ch2);
	printf("[%c%c]\n", ch1, ch2);

	return 0;
}