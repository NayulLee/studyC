// 주소 : 변수가 할당된 메모리 공간의 시작 주소를 의미한다.
// 시작 주소를 알면 그 위치부터 변수의 크기만큼 메모리를 사용할 수 있다.
// 변수의 메모리 주소를 확인해 보자.

#include <stdio.h>
 
int main() {

	int a;
	double b;
	char c;

	printf("int형 변수의 주소: %u\n", &a); // %u 형식지정자 : 부호 없는 10진수
	printf("double형 변수의 주소: %u\n", &b);
	printf("char형 변수의 주소: %u\n", &c);

	return 0;
}
