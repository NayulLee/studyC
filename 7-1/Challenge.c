/* 1부터 일정 수(n)까지의 합을 재귀호출을 사용해서 작성해보세요. 1부터 일정 수(n)까지의 합을 구하는
재귀호출 함수를 만들고 호출하여 구현합니다. 함수명은 다음과 같이 작성합니다 */
#include <stdio.h>

int rec_func(int n); // 1부터 n까지의 합을 반환하는 함수

int main() {

	int sum = 0;
	sum = rec_func(10);

	printf("%d\n", sum);
	return 0;
}

int rec_func(int n) {	
	if (n == 0); return;

	return n + rec_func(n - 1);
}
