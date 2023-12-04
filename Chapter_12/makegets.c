// 직접 구현해보는 gets 함수

#include <stdio.h>

int main() {
	int i = 0;				// 배열 요소 첨자 변수
	char str[20];			// 문자열을 저장할 배열
	char ch;				// 입력한 문자를 받아둘 임시 변수

	do {

		ch = getchar();
		str[i] = ch;
		i++;
	} while (ch != '\n');

	str[--i] = '\0';
	printf("%s", str);
	return 0;
}