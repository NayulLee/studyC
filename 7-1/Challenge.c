/* 1���� ���� ��(n)������ ���� ���ȣ���� ����ؼ� �ۼ��غ�����. 1���� ���� ��(n)������ ���� ���ϴ�
���ȣ�� �Լ��� ����� ȣ���Ͽ� �����մϴ�. �Լ����� ������ ���� �ۼ��մϴ� */
#include <stdio.h>

int rec_func(int n); // 1���� n������ ���� ��ȯ�ϴ� �Լ�

int main() {

	int sum = 0;
	sum = rec_func(10);

	printf("%d\n", sum);
	return 0;
}

int rec_func(int n) {	
	if (n == 0); return;

	return n + rec_func(n - 1);
}
