#include <stdio.h>

void print1(int *prt, int rows);

int main()
{
	printf("-------장세나------2019038086--------\n\n");
	int one[] = { 0,1,2,3,4 };

	printf("one		= %p\n", one);
	printf("&one		= %p\n", &one);
	printf("&one[0]		= %p\n", &one[0]);
	/*one의 값=one의 주소=one의 0번째 element*/

	print1(&one[0], 5);

	return 0;
}

void print1(int *ptr, int rows)
{
	/*print out a one-dimensional array using a pointer*/

	int i;
	printf("Address \t Contents\n");
	for (i = 0; i < rows; i++)
		printf("%p \t %5d\n", ptr + i, *(ptr + i));
	printf("\n");
	/*int형의 배열이므로 주소가 4byte씩 이동한다.*/
}