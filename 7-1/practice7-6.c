// 정상적으로 종료하기 위해 재귀호출 함수는 반복 고리를 끊을 수 있는 조건식을 반드시 포함해야 한다.
// 함수가 3번만 호출되도록 수정해 보자.
#include <stdio.h>

void fruit(int count);

int main() {

	fruit(1);

	return 0;
}

void fruit(int count) {

	printf("apple\n");
	if (count == 3) return;
	fruit(count + 1);
}