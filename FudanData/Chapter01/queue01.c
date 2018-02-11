
#define MAXN 26
char q[MAXN];
int head = -1,tail = -1;


int en_queue(char x)
{
	if(tail == MAXN-1)
		return 1;
	q[++tail] = x;
	return 0;
}

int de_queue(char *p_y)
{
	if(head == tail)
		return 1;
	*p_y = q[++head];

	return 0;
}
