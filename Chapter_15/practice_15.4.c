// �ּҷ� ���̴� �迭���� �迭�� �ּ� ��
#include <stdio.h>

int main() {
	int ary[5];

	printf("ary�� �� : %u\t", ary);
	printf("ary�� �ּ� : %u\t", &ary);
	printf("ary + 1 : %u\t", ary + 1);
	printf("&ary + 1 : %u\t", &ary + 1);

	return 0;
}