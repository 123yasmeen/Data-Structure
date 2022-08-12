//to be modified
#include<stdio.h>
#include<stdlib.h>
#include"Queue.h"
void Display(QueueEntry e)
{
	printf("%d", e);
}
int main()
{
	Queue q;
	QueueEntry e = 0;
	CreateQueue(&q);
	Append(e, &q);
	Serve(&e, &q);
	QueueEmpty(&q);
	QueueFull(&q);
	QueueSize(&q);
	ClearQueue(&q);
	TraverseQueue(&q, Display);
	return 0;
}