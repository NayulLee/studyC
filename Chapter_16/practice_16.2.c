// ���� �Ҵ� ������ �迭ó�� ���

#include <stdio.h>
#include <stdlib.h>

int main() {

	int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL) {
		printf("���� �Ҵ� ����\n");
		exit(1);
	}

	printf("�ټ� ���� ���̸� �Է��ϼ��� >> ");
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &pi[i], sizeof(pi[i]));
		sum += pi[i];
	}

	printf("�ټ� ���� ��� ���� : %.1lf\n", (sum / 5.0));
	free(pi);

	return 0;
}