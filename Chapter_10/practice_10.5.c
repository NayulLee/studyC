// �迭�� ó���ϴ� �Լ�
#include <stdio.h>

void print_ary(int* pa) {
	int i;

	for (i = 0; i < 5; i++) {
		printf("%d ", pa[i]);
	}
}
int main() {
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary);

	return 0;
}