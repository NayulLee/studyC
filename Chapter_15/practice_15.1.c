// 포인터와 이중 포인터의 관계
#include <stdio.h>

int main() {

	int a = 10;
	int* pi;
	int** ppi;

	pi = &a;
	ppi = &pi;

	printf("--------------------------------------------\n");
	printf("변수     변숫값     &연산     *연산     **연산\n");
	printf("--------------------------------------------\n");
	printf("  a%10d%20u\n", a, &a);
	printf(" pi%20u%20u%20d\n", pi, &pi, *pi);
	printf("ppi%20u%20u%20u%20d", ppi, &ppi, *ppi, **ppi);

	return 0;
}