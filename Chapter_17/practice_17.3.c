#include <stdio.h>

struct profile {

	int age;
	double height;
};

struct student {

	struct profile pf;
	int id;
	double grade;
};

int main() {

	struct student nayul;

	nayul.pf.age = 24;
	nayul.pf.height = 160;
	nayul.id = 135;
	nayul.grade = 4.3;

	printf("�й�     : %s\n", nayul.id);
	printf("����     : %d\n", nayul.pf.age);
	printf("Ű       : %.lf\n", nayul.pf.height);
	printf("����     : %s\n", nayul.grade);

	return 0;
}