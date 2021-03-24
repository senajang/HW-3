#include <stdio.h>
#include <stdlib.h>

void main() {
	printf("-------장세나------2019038086-------\n\n");
	int **x;

	printf("sizeof(x) = %lu\n", sizeof(x));
	/*주소를 저장함 32bit 컴퓨터라 크기가 4로 나옴*/
	printf("sizeof(*x) = %lu\n", sizeof(*x));
	/*주소를 저장함 32bit 컴퓨터라 크기가 4로 나옴*/
	printf("sizeof(**x) = %lu\n", sizeof(**x));
	/*두번 reference해서 간 값이 int형을 가리키기 때문에*/
}