#ifndef  UNTITLED_QUEUE_H
#define UNTITLED_QUEUE_H
#define QueueEntry int
typedef struct queuenode
{
	QueueEntry entry;
	struct queuenode* next;
}QueueNode;
typedef struct queue
{
	QueueNode* Front;
	QueueNode* Rear;
	int Size;
}Queue;
void CreateQueue(Queue*);
int Append(QueueEntry, Queue*);
void Serve(QueueEntry*, Queue*);
int QueueEmpty(Queue*);
int QueueFull(Queue*);
int QueueSize(Queue*);
void ClearQueue(Queue*);
void TraverseQueue(Queue*, void(*)(QueueEntry));
#endif // ! UNTITLED_QUEUE_H


