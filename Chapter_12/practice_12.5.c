/* scanf �Լ��� gets �Լ��� �ԷµǴ� ���ڿ��� ũ�Ⱑ �迭 ũ�⸦ �Ѿ ���輺�� �ִ�.
   �����ϰ� ���ڿ��� �Է��Ϸ��� �迭 ũ�⸦ Ȯ���ϴ� fgets �Լ��� ����ϴ� ���� ����.
   fgets�Լ��� �ִ� �迭�� ũ������� ���ڿ��� �Է��Ѵ�.*/

#include <stdio.h>

int main() {
	char str[80];
	printf("������ ���Ե� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);

	printf("�Էµ� ���ڿ��� %s �Դϴ�.", str);

	return 0;
}