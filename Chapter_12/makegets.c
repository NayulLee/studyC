// ���� �����غ��� gets �Լ�

#include <stdio.h>

int main() {
	int i = 0;				// �迭 ��� ÷�� ����
	char str[20];			// ���ڿ��� ������ �迭
	char ch;				// �Է��� ���ڸ� �޾Ƶ� �ӽ� ����

	do {

		ch = getchar();
		str[i] = ch;
		i++;
	} while (ch != '\n');

	str[--i] = '\0';
	printf("%s", str);
	return 0;
}