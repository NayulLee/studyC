#include <stdio.h>

int main() {

	int num, grade;

	printf("학번 입력 :");
	scanf_s("%d", &num);
	getchar();
	printf("학점 입력 :");
	grade = getchar();
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0;
}