#include <stdio.h>

int sum(int x, int y);

int main() {

	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("result : %d\n", result);

	return 0;
}

int sum(int x, int y) {
	int temp;
	
	temp = x + y;

	return temp; // return은 함수의 실행결과를 돌려주는 제어문
}