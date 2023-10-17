// sizeof 연산자를 활용한 배열 처리
// 배열 요소의 개수를 직접 계산하여 반복문에 사용하기
#include <stdio.h>

int main() {

	int score[5];
	int i;
	int total = 0;
	double avg;
	int count; // 배열 요소의 개수를 저장할 변수

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

	printf("평균 : %.1lf", avg);


	return 0;
}