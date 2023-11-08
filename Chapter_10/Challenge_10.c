/* 도전 실전 예제
>> 로또 번호 생성 프로그램
>> 1 ~ 45 중에 6개의 서로 다른 수를 배열에 입력하고 출력한다. 입력한 수가 이미 저장된 수와 같으면 에러 메시지를 출력하고 다시 입력한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main() {

	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);

	return 0;
}

void input_nums(int* lotto_nums) {

	int i, j;

	for (i = 0; i < 6; i++) {

		printf("번호 입력 :");
		scanf_s("%d", &lotto_nums[i], sizeof(int));
		for (j = 0; j < i; j++) {
			if (lotto_nums[i] == lotto_nums[j]) {
				printf("같은 번호가 있습니다!\n");
				i--;
				break;
			}
		}
	}
}

void print_nums(int* lotto_nums) {
	
	printf("로또 번호 :");
	for (int i = 0; i < 6; i++) {
		printf("%5d", lotto_nums[i]);
	}
}

