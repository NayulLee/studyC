// ���ϴ� ������ ���ڸ��� �����ϴ� strncpy �Լ�
#include <stdio.h>
#include <stdlib.h>

int main() {

	char str[20] = "mango tree";

	strncpy(str, "apple_pie", 5);		// apple_pie ���� �ټ� ���ڸ� ����

	printf("%s\n", str);

	return 0;
}