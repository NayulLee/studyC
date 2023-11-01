// 포인터의 대입 규칙 1. 포인터는 가리키는 변수의 형태가 같을 때만 대입해야 한다.
// 허용되지 않는 포인터의 대입 예제
#include <stdio.h>
int main() {

	int a = 10;
	int* p = &a;
	double* pd;

	pd = p;
	printf("%lf\n", *pd);

	return 0;
}