#ifndef  UNTITLED_QUEUE_H
#define UNTITLED_QUEUE_H
#define QueueEntry int
#define MAXQUEUE 100
typedef struct queue
{
	int Front;
	int Rear;
	int Size;
	QueueEntry entry[MAXQUEUE];
}Queue;
void CreateQueue(Queue*);
void Append(QueueEntry, Queue*);
void Serve(QueueEntry*, Queue*);
int QueueEmpty(Queue*);
int QueueFull(Queue*);
int QueueSize(Queue*);
void ClearQueue(Queue*);
void TraverseQueue(Queue*,void(*)(QueueEntry));
#endif // ! UNTITLED_QUEUE_H

