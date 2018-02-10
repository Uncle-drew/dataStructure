//insert or delete node in linear list
#include<stdio.h>
#define MAXSIZE 100

int list_insert(int list[],int *p_n,int i,int x)
//p_n pointer save the amount of nodes,i is the insert position,
//x is the insert data
{
	int j;
	if(i < 0 || i > *p_n)
		return 1;
	if(*p_n == MAXSIZE)
		return 2;
	for(j = * p_n ; j > i ; j--)
		list[j] = list[j-1];
	list[i] = x;
	(*p_n)++;
	return 0;
}

int list_del(int list[],int *p_n,int i)
{
	int j = 0;
	if(i < 0 || i>= *p_n)
		return 1;
	for(j = i+1; j < *p_n; j++)
		list[j-1] = list[j];
	(*p_n)--;

	return 0;
}
void print_arr(int arr[],int num)
{
	int i = 0;
	for(i = 0; i<num; i++)
	{
		printf("%d, ",arr[i]);
	}
	printf("\n");
}

void main()
{
	int list1[] = {1, 2, 3, 4, 5, 6, 7};
	int list2[] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
	int rv1,rv2;
	int num1 = sizeof(list1)/sizeof(list1[0]);
	print_arr(list1,num1);
	int num2 = sizeof(list2)/sizeof(list2[0]);
	print_arr(list2,num2);
	rv1 = list_insert(list1,&num1,3,100);
	rv2 = list_del(list2,&num2,5);
	print_arr(list1,num1);
	print_arr(list2,num2);
	
}
