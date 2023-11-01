// 널 문자가 없는 문자열
#include <stdio.h>

int main() {

	char str[5];

	str[0] = '0'; // 초기화하지 않은 상태에서 배열 요소에 문자를 직접 대입한다면 반드시 마지막 문자 다음에는 널 문자를 대입해야 한다.
	str[1] = 'K';
	printf("%s\n", str); // 초기화되지 않은 배열에 남아있는 쓰레기값까지 출력된다.

	return 0;
}