// 포인터에 사용된 const의 의미
// pa가 가리키는 변수 a는 pa를 간접 참조하여 바꿀 수 없다.
// const의 사용과는 무관하게 변수b의 주소를 저장하고 그 값을 간접 참조하여 출력하는 것은 가능하지만, *pa = 20과 같이 pa를 통해 a를 바꾸고자 하면 컴파일에러
#include<stdio.h>

int main() {
	int a = 10 , b = 20;
	const int* pa = &a;

	printf("변수 a 값 : %d\n", *pa);
	pa = &b;
	printf("변수 b 값 : %d\n", *pa);
	pa = &a;
	a = 20;
	printf("변수 a 값 : %d\n", *pa);

	return 0;
}

