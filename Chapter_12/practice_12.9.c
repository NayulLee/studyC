// 원하는 개수의 문자만을 복사하는 strncpy 함수
#include <stdio.h>
#include <stdlib.h>

int main() {

	char str[20] = "mango tree";

	strncpy(str, "apple_pie", 5);		// apple_pie 에서 다섯 문자만 복사

	printf("%s\n", str);

	return 0;
}