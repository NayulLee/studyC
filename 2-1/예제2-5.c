#include <stdio.h>

int main() {

	printf("%d\n", 12);
	printf("%d\n", 014);
	printf("%d\n", 0xc);

	printf("%o\n", 12); // 8������ ���
	printf("%x\n", 12); // 16���� �ҹ��ڷ� ���
	printf("%X\n", 12); // 16���� �빮�ڷ� ���

	return 0;
}