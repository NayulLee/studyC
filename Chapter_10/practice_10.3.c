// 포인터를 이용한 배열의 값 출력

#include <stdio.h>

int main() {

	int ary[3] = { 10, 20, 30 };
	int* pa = ary;
	int i;

	printf("배열의 값 :");
	for (i = 0; i < 3; i++) {
		printf("%d ", *pa);
		pa++; // 후위 연산자 - 컴파일러는 pa가 증가되기 이전 값을 임시공간에 저장해두었다가 간접 참조 연산에 사용하거나 또는 연산자 우선순위를 바꾸어 pa++보다 *pa의 연산을 먼저 수행하도록 컴파일한다.
	}
	
	return 0;

}