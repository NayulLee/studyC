// ���������� �����ϱ� ���� ���ȣ�� �Լ��� �ݺ� ���� ���� �� �ִ� ���ǽ��� �ݵ�� �����ؾ� �Ѵ�.
// �Լ��� 3���� ȣ��ǵ��� ������ ����.
#include <stdio.h>

void fruit(int count);

int main() {

	fruit(1);

	return 0;
}

void fruit(int count) {

	printf("apple\n");
	if (count == 3) return;
	fruit(count + 1);
}