// ���ڿ� ����
//  char�� �迭�� ���ڿ��� �����ϴ� ������ ������ �ϹǷ�, �ʱ�ȭ�� ���Ŀ��� �󸶵��� ���ο� ���ڿ��� ������ �� �ִ�.
// ��, ���ڿ��� ���̰� �ٸ� �� �����Ƿ� �Ϲ� ����ó�� ���� �����ڸ� ����ϴ� ���� �Ұ����ϴ�.
// strcpy �Լ��� char�� �迭�� ���ο� ���ڿ��� �����ϴ� �Լ���, ������ ���ڿ��� ���̸� �ľ��Ͽ� �� ���̸�ŭ char �迭�� �����Ѵ�(�� ���ڵ� �ڵ����� �ٿ��ش�.).
// strcpt(����� �迭��, ������ ���ڿ�);

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {

	char str1[80] = "strawberry";
	char str2[80];

	strcpy(str1, "tigar");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);

	return 0;

}
