// 문자열을 출력하는 puts와 fputs 함수
#include <stdio.h>

int main() {

	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");

	return 0;
}