//#include<stdio.h>
//#include<malloc.h>
//#define maxsize 10
//typedef struct stack
//{
//	int data[maxsize];
//	int top;
//}sqstack;
//bool initstack(sqstack &s)
//{
//	s.top = -1;
//	return true;
//}
//bool push(sqstack& s,int& x)//入栈
//{
//	if (s.top == maxsize - 1)
//	{
//		return false;
//	}
//	s.data[++s.top] = x;
//	return true;
//}
//bool pop(sqstack& s, int& x)
//{
//	if (s.top == -1)
//	{
//		return false;
//	}
//	x = s.data[s.top--];
//	return true;
//}
//int gettop(sqstack s,int& e)//获取栈顶元素
//{
//	if (s.top == -1)
//	{
//		return false;
//	}
//	s.data[s.top] = e;
//	return e;
//}
//void creatsqstack(sqstack& s)
//{
//	int x;
//	int e;
//	do
//	{
//		scanf_s("%d", &x);
//		if (x != -1)
//		{
//			push(s, x);
//		}
//		else
//		{
//			if (pop(s, e))
//			{
//				printf("%d",e);
//			}
//		}
//	} while (s.top<maxsize-1);
//}
//int main(void)
//{
//	sqstack s;
//	initstack(s);
//	creatsqstack(s);
//	return 0;
//}