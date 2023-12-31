// auto 지역 변수와 static 지역 변수의 비교
#include <stdio.h>

void auto_func();
void static_func();

int main() {

	int i;

	printf("일반 지역 변수(auto)를 사용한 함수...\n");
	for (i = 0; i < 3; i++) {

		auto_func();
	}

	printf("정적 지역 변수 (static)를 사용한 함수...\n");
	for (i = 0; i < 3; i++) {

		static_func();
	}

	return 0;
}

void auto_func() {
	
	auto int a = 0; // 지역 변수 선언과 초기화

	a++;
	printf("%d\n", a);
}

void static_func() {

	static int a;

	a++;
	printf("%d\n", a);
}