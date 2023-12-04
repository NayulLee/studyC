// 여러 개의 동물 이름을 입출력하는 프로그램

#include <stdio.h>

int main() {

	char animal[5][20];
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]);
	for (i = 0; i < count; i++) {

		scanf_s("%s", animal[i], sizeof(animal[i]));

	}
	for (i = 0; i < count; i++) {

		printf("%s", animal[i]);
	}

	return 0;
}