// scanf �Լ��� char�� �迭�� ���ڿ��� �Է��� �� ������ �߰��� ��ĭ�� �ִ� ��� ��ĭ �������� �Է��Ѵ�(�����̽���, ���͸� �������� ��ūȭ).
// gets �Լ��� ��ĭ�� �����Ͽ� �� �� ��ü�� ���ڿ��� �Է��Ѵ�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char str[80];

	printf("���ڿ� �Է� : ");
	gets(str);
	puts("�Էµ� ���ڿ� : ");
	puts(str);

	return 0;
}