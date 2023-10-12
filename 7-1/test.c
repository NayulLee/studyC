#include <stdio.h>

int main() {
	char name[20];

	printf("Hello, World!\n");
	printf("Your Name : ");
	scanf_s("%s", name, sizeof(name));
	printf("Welcome, %s!", name);

	return 0;
}