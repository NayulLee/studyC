// scanf 함수는 char형 배열에 문자열을 입력할 수 있으나 중간에 빈칸이 있는 경우 빈칸 전까지만 입력한다(스페이스바, 엔터를 기준으로 토큰화).
// gets 함수는 빈칸을 포함하여 한 줄 전체를 문자열로 입력한다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char str[80];

	printf("문자열 입력 : ");
	gets(str);
	puts("입력된 문자열 : ");
	puts(str);

	return 0;
}