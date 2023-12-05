#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {

	char name[20];
	int age;
	double height;
	char* intro;
};

int main() {
	
	struct profile nayul;

	strcpy(nayul.name, "이나율");
	nayul.age = 24;
	nayul.height = 160;

	nayul.intro = (char*)malloc(80);	// intro 멤버는 포인터이므로 문자열 자체를 저장할 공간이 없다. 
	printf("한 줄 자기소개 >> ");		// 따라서 자기소개를 입력해야 한다면 동적 할당을 통해 저장 공간을 먼저 확보해야 한다
	gets(nayul.intro);

	printf("이름     : %s\n", nayul.name);
	printf("나이     : %d\n", nayul.age);
	printf("키       : %.lf\n", nayul.height);
	printf("자기소개 : %s\n", nayul.intro);

	free(nayul.intro);

	return 0;
	
}