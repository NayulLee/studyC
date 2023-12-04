// 동적 할당 영역의 문자열을 함수로 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** ps);

int main() {

	char temp[80];				// 임시 char 배열
	char* str[21] = { 0 };		// 문자열을 연결할 포인터 배열, 널 포인터로 초기화
	int i = 0;					// 반복 제어 변수

	while (i < 20) {  // 최대 20개까지 입력

		printf("문자열을 입력하세요 : ");
		gets(temp);
		if (strcmp(temp, "end") == 0) break;  // end가 입력되면 반복 종료
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
		i++;
	}
	print_str(str);

	for (i = 0; str[i] != NULL; i++) {		// str에 연결된 문자열이 없을 때까지 반복
		free(str[i]);
	}

	return 0;
}

void print_str(char** ps) {

	while (*ps != NULL) {		// 포인터 배열의 값이 널 포인터가 나올 때까지 반복
		printf("%s\n", ps);
		ps++;
	}
}