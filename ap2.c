#include <stdio.h>
#include <stdlib.h>

void main() {
	printf("-----------------장세나-------2019038086-------------\n\n");
	int list[5];
	int *plist[5];

	list[0] = 10;
	list[1] = 11;

	plist[0] = (int*)malloc(sizeof(int));

	printf("list[0] \t= %d\n", list[0]);
	printf("address of list \t= %p\n", &list);
	printf("address of list[0] \t= %p\n", &list[0]);
	printf("address of list + 0 \t= %p\n", list + 0);
	/*list의 주소와 list[0]의 주소, list +0의 주소가 동일함*/
	printf("address of list + 1 \t= %p\n", list + 1);
	/*list의 주소에서 4byte만큼 이동함*/
	printf("address of list + 2 \t= %p\n", list + 2);
	/*list+1의 주소에서 4byte만큼 이동함*/
	printf("address of list + 3 \t= %p\n", list + 3);
	/*list+2의 주소에서 4byte만큼 이동함*/
	printf("address of list + 4 \t= %p\n", list + 4);
	/*list+3의 주소에서 4byte만큼 이동함*/
	printf("address of list[4] \t= %p\n", &list[4]);
	/*list+4와 list[4]의 주소가 동일함*/

	free(plist[0]);

}