// 제어 문자(문자는 아니지만 출력 방식에 영향을 주는 문자
#include <stdio.h>

int main() {

	printf("Be happy\n");
	printf("123456789\n");
	printf("My\tfriend\n");
	// "My"를 출력하고 탭 위치로 이동(\t)후에 "friend"를 출력하고 줄을 바꿈.
	printf("Goot\bd\tchance\n");  // "Goot"를 출력하고 한 칸 왼쪽으로 이동(\b)해
	// t를 d로 바꾸고 탭 위치로 이동(/t)후에 "chance"를 출력하고 줄을 바꿈.
	printf("Cow\rW\a\n");
	// 맨 앞으로 이동(\r)해 C를 W로 바꾸고 벨소리(\a)를 내고 줄을 바꿈.
	
	return 0;
}