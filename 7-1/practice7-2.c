// �Ű������� ���� �Լ� : Ű���带 ���� �Է��ϸ� ����� ��ȯ�ϴ� �Լ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int get_num(void);

int main() {

	int result = 7;

	result = get_num();
	printf("��ȯ�� : %d\n", result);

	return 0;
}

int get_num(void) {
	int num;

	printf("��� �Է� : ");
	scanf("%d", &num);

	return num;
}