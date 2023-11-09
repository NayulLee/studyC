// 입력 문자의 아스키 코드 값을 출력하는 프로그램
#include <stdio.h>

int main() {

	int res;
	char ch;

	while (1) {

		res = scanf_s("%c", &ch, sizeof(res));
		if (res == -1) break;
		printf("%d", ch);
	}

	return 0;
}