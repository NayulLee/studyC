// ��Ÿ ���� �Ҵ� �Լ�
#include <stdio.h>
#include <stdlib.h>

int main() {

	int* pi;
	int size = 5;
	int count = 0;
	int num;
	int i;

	pi = (int*)calloc(size, sizeof(int));

	while (1) {

		printf("����� �Է��ϼ��� >> ");
		scanf_s("%d", &num);
		if (num <= 0) break;
		if (count == size) {	// ���� ������ ��� ����ϸ�
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));		// ũ�⸦ �÷��� ���Ҵ�
		}
		pi[count++] = num;
	}

	for (i = 0; i < count; i++) {
		printf("%d", pi[i]);
	}

	free(pi);

	return 0;
}