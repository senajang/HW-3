#include <stdio.h>

struct student {
	char lastName[13];	/*13bytes*/
	int studentId;	/*4bytes*/
	short grade;	/*2bytes*/
};

int main() {
	printf("-----Àå¼¼³ª-----2019038086-----\n\n");

	struct student pst;

	printf("size of student = %ld\n", sizeof(struct student));
	printf("size of int = %ld\n", sizeof(int));
	printf("size of short = %ld\n", sizeof(short));

	return 0;
}