#include<stdio.h>
#include<malloc.h>
typedef struct stack
{
	struct stack* next;
	int data;
}stacknode,*listack;
bool initlistack(listack& s)
{
	s= NULL;
	return true;
}
bool gettop(listack s,int &x)
{
	if (s == NULL)
	{
		return false;
	}
	x = s->data;
	return true;
}
bool push(listack &s, int x)
{
	stacknode* p = (stacknode*)malloc(sizeof(stacknode));
	p->data = x;
	p->next = s;
	s = p;
	return true;
}
int pop(listack& s)
{
	int x;
	if (s == NULL)
	{
		return false;
	}
	x = s->data;
	stacknode* p = (stacknode*)malloc(sizeof(stacknode));
	p = s;
	s = s->next;
	free(p);
	return x;
}
bool empty(listack s)
{
	if (s == NULL)
	{
		return false;
	}
	return true;
}
int lengthstack(listack s)
{
	stacknode* p = s;
	int len = 0;
	while (p!=NULL)
	{
		len++;
		p = p->next;
	}
	return len;
}
void converse(int num, int mode)
{
	int temp = 0;
	listack s;
	initlistack(s);
	while (num != 0)
	{
		temp = num % mode;
		num = (num - temp) / mode;
		push(s,temp);
	}
	int len = lengthstack(s);
	for (int i = 0; i < len; i++)
	{
		int e = pop(s);
		printf("%d",e);
	}
	printf("\n");
}

int main(void)
{
	listack s;
	initlistack(s);
	push(s,10);
	push(s,20);
	int x = pop(s);
	printf("%d",x);
	converse(159,8);
	return 0;
}