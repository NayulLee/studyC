// �����Ϳ� ���� �������� ����
#include <stdio.h>

int main() {

	int a = 10;
	int* pi;
	int** ppi;

	pi = &a;
	ppi = &pi;

	printf("--------------------------------------------\n");
	printf("����     ������     &����     *����     **����\n");
	printf("--------------------------------------------\n");
	printf("  a%10d%20u\n", a, &a);
	printf(" pi%20u%20u%20d\n", pi, &pi, *pi);
	printf("ppi%20u%20u%20u%20d", ppi, &ppi, *ppi, **ppi);

	return 0;
}