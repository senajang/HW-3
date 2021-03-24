#include <stdio.h>
#include <stdlib.h>

void main() {
	printf("-----------------장세나-------2019038086-------------\n\n");
	int list[5]; /*int를 다섯개 담을 수 있는 배열 선언*/
	int *plist[5] = { NULL, }; /*int형 포인터를 null로 초기화*/

	plist[0] = (int *)malloc(sizeof(int)); /*plist[0]에 malloc을 통해서 4바이트 메모리를 heap에서 받아서 주소를 넘겨줌*/

	list[0] = 1; /*list[0]에 1넣음*/
	list[1] = 100; /*list[1]에는 100을 넣음*/

	*plist[0] = 200; /*plist[0]이 가리키는 곳에 200을 넣음*/

	printf("value of list[0] = %d\n", list[0]);
	printf("address of list[0]			= %p\n", &list[0]);
	printf("value of list				= %p\n", list);
	printf("address of list (&list)			= %p\n", &list);
	/*list의 0번째 값, list의 이름, list의 주소가 모두 동일한 값임*/
	printf("---------------------------------------------------\n\n");
	printf("value of list[1]		= %d\n", list[1]);
	printf("address of list[1]		= %p\n", &list[1]);
	printf("value of *(list+1)		= %d\n", *(list + 1));
	printf("address of list+1		= %p\n", list + 1);
	/*list가 int형 array이기때문에 +1을 하게되면 주소에다가 4byte만큼 이동한 곳이 list+1이됨*/
	printf("---------------------------------------------------\n\n");

	printf("value of *plist[0] = %d\n", *plist[0]);
	printf("&plist[0]		   = %p\n", &plist[0]);
	printf("&plist			   = %p\n", &plist);
	printf("plist			   = %p\n", plist);
	printf("plist[0]		   = %p\n", plist[0]);
	printf("plist[1]		   = %p\n", plist[1]);
	printf("plist[2]		   = %p\n", plist[2]);
	printf("plist[3]		   = %p\n", plist[3]);
	printf("plist[4]		   = %p\n", plist[4]);
	/*배열의 이름은 주소이다.*/
	free(plist[0]);

}