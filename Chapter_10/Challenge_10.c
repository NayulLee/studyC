/* ���� ���� ����
>> �ζ� ��ȣ ���� ���α׷�
>> 1 ~ 45 �߿� 6���� ���� �ٸ� ���� �迭�� �Է��ϰ� ����Ѵ�. �Է��� ���� �̹� ����� ���� ������ ���� �޽����� ����ϰ� �ٽ� �Է��Ѵ�.
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

		printf("��ȣ �Է� :");
		scanf_s("%d", &lotto_nums[i], sizeof(int));
		for (j = 0; j < i; j++) {
			if (lotto_nums[i] == lotto_nums[j]) {
				printf("���� ��ȣ�� �ֽ��ϴ�!\n");
				i--;
				break;
			}
		}
	}
}

void print_nums(int* lotto_nums) {
	
	printf("�ζ� ��ȣ :");
	for (int i = 0; i < 6; i++) {
		printf("%5d", lotto_nums[i]);
	}
}

