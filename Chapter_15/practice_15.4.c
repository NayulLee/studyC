// 주소로 쓰이는 배열명과 배열의 주소 비교
#include <stdio.h>

int main() {
	int ary[5];

	printf("ary의 값 : %u\t", ary);
	printf("ary의 주소 : %u\t", &ary);
	printf("ary + 1 : %u\t", ary + 1);
	printf("&ary + 1 : %u\t", &ary + 1);

	return 0;
}