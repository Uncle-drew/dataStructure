//进栈、出栈
#include<stdio.h>
#define MAXN 26
char stack[MAXN];
int top = 0;

int push(char x)
{
	if(top >=MAXN)
		return 1;
	stack[top++] = x;

	return 0;
}
int pop(char *y)
{
	if(top >=MAXN)
		return 1;
	*y = stack[--top];
	return 0;
}
void print_arr(char arr[])
{
	int i =0;
	for(i= 0;i < top;i++)
	{
		printf("%c, ",arr[i]);
	}
	printf("\n");
}
void main()
{
	char tmp = 0;
	push('a');
	push('b');
	push('c');
	print_arr(stack);
	pop(&tmp);
	print_arr(stack);
}

