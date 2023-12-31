﻿// 3개의 문자열을 저장하기 위한 동적 할당
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char temp[80];			// 임시 char 배열
	char* str[3];			// 동적 할당 영역을 연결할 포인터 배열
	int i;

	for (i = 0; i < 3; i++) {

		printf("문자열을 입력하세요 >> ");
		gets(temp);
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
	}

	for (i = 0; i < 3; i++) {

		printf("%s\n", str[i]);		// 입력된 문자열 출력
	}

	for (i = 0; i < 3; i++) {
		free(str[i]);			// 동적 할당 영역 반환
	}

	return 0;
}