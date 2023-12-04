// 버퍼를 사용하는 문자 입력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char ch;
	int i;
	
	while (1) {
		scanf("%c", &ch);
		if (ch == '\n') break;
		printf("%c", ch);
	}

	return 0;
}