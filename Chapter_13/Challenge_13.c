/* ���� ���� ���� -  ���� ���� ��ȯ ���α׷�
   2���� ���� ������ ���� �Է��ϰ� ��ȯ�� �Ŀ� ����ϴ� ���α׷��� �ۼ��մϴ�.
   �Է�, ��ȯ, ��� �۾��� ������ ���õ� �Լ� ������ ���� �ۼ��մϴ�
   */
#include <stdio.h>

void input_data(int* pa, int* pb);
void swap_data(void);
void print_data(int a, int b);

int a, b;

int main() {

	input_data(&a, &b);
	swap_data();
	print_data(a, b);

	return 0;

}

void input_data(int* pa, int* pb) {

	printf("�� ���� �Է� : ");
	scanf_s("%d %d", pa, pb);

}

void swap_data() {
	
	int temp;
	temp = a;
	a = b;
	b = temp;
	
}

void print_data(int a, int b) {

	printf("a�� : %d\n", a);
	printf("b�� : %d\n", b);

}