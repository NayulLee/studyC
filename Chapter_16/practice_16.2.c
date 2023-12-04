// 동적 할당 영역을 배열처럼 사용

#include <stdio.h>
#include <stdlib.h>

int main() {

	int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL) {
		printf("동적 할당 실패\n");
		exit(1);
	}

	printf("다섯 명의 나이를 입력하세요 >> ");
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &pi[i], sizeof(pi[i]));
		sum += pi[i];
	}

	printf("다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0));
	free(pi);

	return 0;
}