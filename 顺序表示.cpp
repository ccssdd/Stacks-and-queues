
//#include<stdio.h>
//#include<malloc.h>
//#define maxsize 20
//typedef struct queue
//{
//	int data[maxsize];
//	int size;
//	int rear;
//	int front;
//}queue;
//bool initqueue(queue& q)
//{
//	q.size = 0;
//	q.rear = q.front = 0;
//	return true;
//}
//
//bool enqueue(queue& q,int x)
//{
//	if (q.size == maxsize)
//	{
//		return false;
//	}
//	q.data[q.rear] = x;
//	q.rear = (q.rear + 1) % maxsize;
//	q.size++;
//	return true;
//}
//bool dequeue(queue& q, int& x)
//{
//	if (q.rear == q.front)
//	{
//		return false;
//	}
//	x = q.data[q.front];
//	q.front = (q.front + 1) % maxsize;
//	q.size--;
//	return true;
//}
//void output(queue q)
//{
//	while (q.rear != q.front)
//	{
//		printf("%d",q.data[q.front]);
//		q.front = (q.front + 1) % maxsize;
//	}
//}
//int lenqueue(queue q)
//{
//	return (q.rear - q.front + maxsize) % maxsize;
//}
//void createqueue(queue& q,int n)
//{
//	int x;
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d ",&x);
//		enqueue(q,x);
//	}
//	printf("\n");
//}
//int main(void)
//{
//	queue q;
//	initqueue(q);
//	createqueue(q,5);
//	output(q);
//	printf("%d",lenqueue(q));
//	return 0;
//}