// char형 배열의 선언과 초기화
// NULL문자 (\0)의 기능
#include <stdio.h>

int main() {
	char str[80] = "applejam";

	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf_s("%s", str, sizeof(str));
	printf("입력 후 문자열 : %s\n", str);

	return 0;
}