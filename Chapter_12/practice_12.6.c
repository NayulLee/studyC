// ���� ���ڷ� ���� gets �Լ��� �Է��� ���ϴ� ���
#include <stdio.h>

int main() {
	int age;
	char name[20];

	printf("���� �Է� : ");
	scanf_s("%d", &age, sizeof(age));

	printf("�̸� �Է� : ");
	gets(name);
	printf("���� : %d, �̸� : %s\n", age, name);

	return 0;
}