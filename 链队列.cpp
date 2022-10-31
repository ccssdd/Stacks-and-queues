//#include<stdio.h>
//#include<malloc.h>
//typedef struct queue
//{
//	struct queue* next;
//	int data;
//
//}queuenode;
//typedef struct
//{
//	queuenode* front, *rear;
//}linkqueue;
//
//bool initqueue(linkqueue& q)
//{
//	q.front = NULL;
//	q.rear = NULL;
//	return true;
//}
//
//bool enqueue(linkqueue& q,int x)
//{
//	queuenode* s = (queuenode*)malloc(sizeof(queuenode));
//	s->data = x;
//	s->next = NULL;
//	if (q.front == NULL)
//	{
//		q.front = s;
//		q.rear = s;
//	}
//	else
//	{
//		q.rear->next = s;
//		q.rear = s;
//	}
//	return true;
//}
//
//bool dequeue(linkqueue& q, int& x)
//{
//	queuenode* p = q.front;
//	if (q.front == NULL)
//	{
//		return false;
//	}
//	x = p->data;
//	q.front = p->next;
//	if (q.rear == p)
//	{
//		q.rear = q.front;
//	}
//	free(p);
//	return true;
//}
//int getvalue(linkqueue q)
//{
//	if (q.front == q.rear)
//	{
//		return 0;
//	}
//	return q.front->data;
//}
//void createqueue(linkqueue& q, int n)
//{
//	int x;
//	for(int i = 0; i < n; i++)
//	{
//		scanf_s("%d",&x);
//		enqueue(q, x);
//	}
//}
//void output(linkqueue q)
//{
//	queuenode* p = q.front;
//	while (p)
//	{
//		printf("%d\n",p->data);
//		p = p->next;
//	}
//}
//
//int main(void)
//{
//	linkqueue q;
//	initqueue(q);
//	createqueue(q, 3);
//	output(q);
//}