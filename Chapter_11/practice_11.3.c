// getchar�Լ��� putchar �Լ��� ���
#include <stdio.h>

int main() {

	int ch;

	ch = getch(); // getch�Լ��� �Ű������� �����Ƿ� ��ȣ�� ����Ͽ� ȣ���Ѵ�. ȣ��� �Լ��� Ű����� �Է��� ������ �ƽ�Ű �ڵ� ���� ��ȯ�ϹǷ� ��ȯ���� int�� ����
	printf("�Է��� ���� :");
	putchar(ch); // putchar�Լ��� ���� ����� �ƽ�Ű �ڵ� ���� �μ��� �ָ� �ش� ���ڸ� ȭ�鿡 ���, ����� ���ڸ� �ٽ� ��ȯ�ϸ� ���� �߻� �� -1�� �����Ѵ�.
	putchar('\n');

	return 0;
}