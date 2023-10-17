// 배열과 반복문을 사용한 성적 처리 프로그램
#include <stdio.h>

int main() {

	int score[5];
	int i;
	int total = 0;
	double avg;

	printf("성적 입력 >> ");
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &score[i], sizeof(score[i]));
	}

	for (i = 0; i < 5; i++) {
		total += score[i];
	}

	avg = total / 5.0;

	for (i = 0; i < 5; i++) {
		printf("%5d", score[i]);
	}

	printf("\n");

	printf("average : %.1lf\n", avg);

	return 0;
}