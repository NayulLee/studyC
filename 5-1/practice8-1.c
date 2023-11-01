// 예제 8-1. 배열을 하나 선언한 다음 5명의 나이를 저장하고 사용해 보자.
#include <stdio.h>

int main() {

	int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf_s("%d", &ary[3], sizeof(ary[3]));

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]); // 마지막 배열 요소는 쓰레기값

	return 0;

}