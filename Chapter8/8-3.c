// sizeof �����ڸ� Ȱ���� �迭 ó��
// �迭 ����� ������ ���� ����Ͽ� �ݺ����� ����ϱ�
#include <stdio.h>

int main() {

	int score[5];
	int i;
	int total = 0;
	double avg;
	int count; // �迭 ����� ������ ������ ����

	count = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < count; i++) {
		scanf_s("%d", &score[i], sizeof(score[i]));
	}

	for (i = 0; i < count; i++) {
		total += score[i];
	}

	avg = total / (double)count;
	
	for (i = 0; i < count; i++) {
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("��� : %.1lf", avg);


	return 0;
}