#include <stdio.h>
#define MAX_SIZE 100
float sum(float list[], int);
float input[MAX_SIZE], answer;
int i;
void main(void)
{
	printf("----------장세나---------2019038086----------\n\n");
	for (i = 0; i < MAX_SIZE; i++)
		input[i] = i; /*MAX_SIZE만큼 돌면서 i를 집어 넣음, input은 주소로 MAX_SIZE개 만큼 존재*/
	
	/*for checking call by reference*/
	printf("address of input = %p\n", input);

	answer = sum(input, MAX_SIZE); /*sum을 호출*/
	printf("The sum is : %f\n", answer);
}

float sum(float list[], int n) /*call by reference*/
{
	printf("value of list =%p\n", list); /*input의 주소를 list가 담고 있음*/
	printf("address of list = %p\n\n", &list);

	int i;
	float tempsum = 0;
	for (i = 0; i < n; i++)
		tempsum += list[i]; /*1부터 MAX_SIZE까지 더함*/
	return tempsum;
}