// ���� ����(���ڴ� �ƴ����� ��� ��Ŀ� ������ �ִ� ����
#include <stdio.h>

int main() {

	printf("Be happy\n");
	printf("123456789\n");
	printf("My\tfriend\n");
	// "My"�� ����ϰ� �� ��ġ�� �̵�(\t)�Ŀ� "friend"�� ����ϰ� ���� �ٲ�.
	printf("Goot\bd\tchance\n");  // "Goot"�� ����ϰ� �� ĭ �������� �̵�(\b)��
	// t�� d�� �ٲٰ� �� ��ġ�� �̵�(/t)�Ŀ� "chance"�� ����ϰ� ���� �ٲ�.
	printf("Cow\rW\a\n");
	// �� ������ �̵�(\r)�� C�� W�� �ٲٰ� ���Ҹ�(\a)�� ���� ���� �ٲ�.
	
	return 0;
}