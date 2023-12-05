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

	printf("학번     : %s\n", nayul.id);
	printf("나이     : %d\n", nayul.pf.age);
	printf("키       : %.lf\n", nayul.pf.height);
	printf("학점     : %s\n", nayul.grade);

	return 0;
}