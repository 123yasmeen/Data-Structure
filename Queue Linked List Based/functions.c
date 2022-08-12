#include<stdlib.h>
#include"Queue.h"
void CreateQueue(Queue* pq)
{
	pq->Front = NULL;
	pq->Rear = NULL;
	pq->Size = 0;
}
int Append(QueueEntry e, Queue* pq)
{
	QueueNode* pn = (QueueNode*)malloc(sizeof(QueueNode));
	if (!pn)
		return 0;
	else {
		pn->next = NULL;
		pn->entry = e;
		if (!pq->Rear)
			pq->Front = pn;
		else {
			pq->Rear->next = pn;
			pq->Rear = pn;
			pq->Size++;
		}
		return 1;
	}
}
void Serve(QueueEntry* pe, Queue* pq)
{
	QueueNode* pn = pq->Front;
	*pe = pn->entry;
	pq->Front = pn->next;
	free(pn);
	if (!pq->Front)
		pq->Rear = NULL;
	pq->Size--;
}
int QueueEmpty(Queue* pq)
{
	return !pq->Rear;
}
int QueueFull(Queue* pq)
{
	return 0;
}
int QueueSize(Queue* pq)
{
	return pq->Size;
}
void ClearQueue(Queue* pq)
{
	while (pq->Front)
	{
		pq->Rear = pq->Front->next;
		free(pq->Front);
		pq->Front = pq->Rear;
	}
	pq->Size = 0;
}
void TraverseQueue(Queue* pq, void(*pf)(QueueEntry))
{
	for (QueueNode* pn=pq->Front;pn;pn=pn->next)
	{
		(*pf)(pn->entry);
	}
}