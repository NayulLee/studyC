// getchar 함수를 사용한 문자열 입력
#include <stdio.h>

void my_gets(char* str, int size) {

	int ch;
	int i = 0;

	ch = getchar();
	while ((ch != 'n') && (i < size - 1)) {

		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\0';
}
int main() {

	char str[7];

	my_gets(str, sizeof(str));
	printf("입력할 문자열 : %s\n", str);

	return 0;
}