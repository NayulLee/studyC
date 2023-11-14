/* scanf 함수와 gets 함수는 입력되는 문자열의 크기가 배열 크기를 넘어설 위험성이 있다.
   안전하게 문자열을 입력하려면 배열 크기를 확인하는 fgets 함수를 사용하는 것이 좋다.
   fgets함수는 최대 배열의 크기까지만 문자열을 입력한다.*/

#include <stdio.h>

int main() {
	char str[80];
	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);

	printf("입력된 문자열은 %s 입니다.", str);

	return 0;
}