#include <stdio.h>

int main() {
	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%c�� %s�Դϴ�.\n", '1', "first");

	return 0;
}



/*What does Git do?
	Repository(�����)����� ������Ʈ ����
	Clone : Git�� Repository�� ����Ǿ� �ִ� ������Ʈ�� ����(local)�� ����
	Commit : �ڵ� ��ȭ�� �����ϱ� ���� ���. ���� ���� �ڵ忡 ���� ������ Ư�� �������� ����� ��
			 �ڵ��� �������� ��� �ൿ.
	Branch : �ڵ��� �κ� ����, ���� ����
	Pull : ������Ʈ�� �ֽ� ���� �ڵ带 ���ÿ� ������Ʈ
	Push : ���� �ڵ带 ������Ʈ�� ������Ʈ*/