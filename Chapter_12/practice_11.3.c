// scanf�Լ��� �̿��� ���ڿ� �Է�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char str[80];

	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("ù ��° �ܾ� : %s\n", str);
	scanf("%s", str);
	printf("���ۿ� ���� �ִ� �� ��° �ܾ� : %s\n", str);
	

	return 0;
}