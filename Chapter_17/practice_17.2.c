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

	strcpy(nayul.name, "�̳���");
	nayul.age = 24;
	nayul.height = 160;

	nayul.intro = (char*)malloc(80);	// intro ����� �������̹Ƿ� ���ڿ� ��ü�� ������ ������ ����. 
	printf("�� �� �ڱ�Ұ� >> ");		// ���� �ڱ�Ұ��� �Է��ؾ� �Ѵٸ� ���� �Ҵ��� ���� ���� ������ ���� Ȯ���ؾ� �Ѵ�
	gets(nayul.intro);

	printf("�̸�     : %s\n", nayul.name);
	printf("����     : %d\n", nayul.age);
	printf("Ű       : %.lf\n", nayul.height);
	printf("�ڱ�Ұ� : %s\n", nayul.intro);

	free(nayul.intro);

	return 0;
	
}