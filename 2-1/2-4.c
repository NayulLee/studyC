#include <stdio.h>

int main() {

	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45); // �Ҽ��� ���� ù° �ڸ����� ���(��° �ڸ����� �ݿø�)
	printf("%.10lf\n", 3.4); // �Ҽ��� ���� 10�ڸ����� ���

	printf("%d�� %d�� ���� %d�Դϴ�.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 2.4, 1.2, 3.4 - 1.2);

	return 0;
}