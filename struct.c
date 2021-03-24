#include <stdio.h>

struct student1 {
	char lastName;
	int studentId;
	char grade;
};
/*typedef이 되어있지 않은 구조체*/
typedef struct {
	char lastName;
	int studentId;
	char grade;
} student2;
/*typedef이 된 구조체*/

int main() {
	printf("------장세나------2019038086------\n\n");

	struct student1 st1 = { 'A', 100, 'A' }; /*struct를 빼고 compile하면 오류가남*/

	printf("st1.lastName = %c\n", st1.lastName);
	printf("st1.studentId = %d\n", st1.studentId);
	printf("st1.grade = %c\n", st1.grade);

	student2 st2 = { 'B', 200, 'B' };

	printf("\nst2.lastName = %c\n", st2.lastName);
	printf("st2.studentId = %d\n", st2.studentId);
	printf("st2.grade = %c\n", st2.grade);

	student2 st3;

	st3 = st2; /*구조치환*/

	printf("\nst3.lastName = %c\n", st3.lastName);
	printf("st3.studentId = %d\n", st3.studentId);
	printf("st3.grade = %c\n", st3.grade);

	/*equality test*/
	/*
	if (st3 == st2)
		printf("equal\n");
	else
		printf("not equal\n");
	*/
	/*비교를 할 수 없음, 동일한지 비교하고싶다면 하나하나 비교를 해줘야함*/
	return 0;
}