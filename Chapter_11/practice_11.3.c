// getchar함수와 putchar 함수의 사용
#include <stdio.h>

int main() {

	int ch;

	ch = getch(); // getch함수는 매개변수가 없으므로 괄호만 사용하여 호출한다. 호출된 함수는 키보드로 입력한 문자의 아스키 코드 값을 반환하므로 반환값은 int형 변수
	printf("입력한 문자 :");
	putchar(ch); // putchar함수는 문자 상수나 아스키 코드 값을 인수로 주면 해당 문자를 화면에 출력, 출력한 문자를 다시 반환하며 에러 발생 시 -1을 반한한다.
	putchar('\n');

	return 0;
}