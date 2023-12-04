// 기타 동적 할당 함수
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

		printf("양수만 입력하세요 >> ");
		scanf_s("%d", &num);
		if (num <= 0) break;
		if (count == size) {	// 저장 공간을 모두 사용하면
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));		// 크기를 늘려서 재할당
		}
		pi[count++] = num;
	}

	for (i = 0; i < count; i++) {
		printf("%d", pi[i]);
	}

	free(pi);

	return 0;
}