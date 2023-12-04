// 문자열 대입
//  char형 배열이 문자열을 저장하는 변수의 역할을 하므로, 초기화된 이후에도 얼마든지 새로운 문자열을 저장할 수 있다.
// 단, 문자열의 길이가 다를 수 있으므로 일반 변수처럼 대입 연산자를 사용하는 것은 불가능하다.
// strcpy 함수는 char형 배열에 새로운 문자열을 저장하는 함수로, 저장할 문자열의 길이를 파악하여 그 길이만큼 char 배열에 복사한다(널 문자도 자동으로 붙여준다.).
// strcpt(저장될 배열명, 저장할 문자열);

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {

	char str1[80] = "strawberry";
	char str2[80];

	strcpy(str1, "tigar");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);

	return 0;

}
