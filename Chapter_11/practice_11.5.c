// �Է� ������ �ƽ�Ű �ڵ� ���� ����ϴ� ���α׷�
#include <stdio.h>

int main() {

	int res;
	char ch;

	while (1) {

		res = scanf_s("%c", &ch, sizeof(res));
		if (res == -1) break;
		printf("%d", ch);
	}

	return 0;
}