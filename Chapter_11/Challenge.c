#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int res, cnt = 0, max = 0;
	char ch;
	

	while (1) {

		res = scanf("%c", &ch);
		if (res == -1) break;
		while (ch != '\n') {
			ch = getchar();
			cnt++;
		}
		if (cnt > max) max = cnt;
		cnt = 0;
	}

	printf("가장 긴 단어의 길이 : %d", max);

	return 0;
}