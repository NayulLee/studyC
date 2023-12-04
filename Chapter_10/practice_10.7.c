// 배열에 값을 입력하는 함수

#include <stdio.h>

void input_ary(double* pa, int size) {
	int i;

	printf("4개의 실수값 입력 : ");
	for(i = 0; i < size; i++){
		scanf_s("%lf", pa + i, 4);
	}
}
double find_max(double* pa, int size) {
	
	double max;
	int i;

	max = pa[0];
	for (i = 0; i < size; i++) {
		if (pa[i] > max) max = pa[i];
	}

	return max;
}

int main() {
	
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size);
	printf("배열의 최댓값 : %.1lf\n", max);

	return 0;
}