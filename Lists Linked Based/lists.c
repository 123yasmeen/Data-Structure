#include<stdio.h>
#include<stdlib.h>
#include "list.h"
void CreateList(List* pl)
{
	pl->head = NULL;
	pl->size = 0;
}
int ListEmpty(List* pl)
{
	return !pl->head;
}
int ListFull(List* pl)
{
	return 0;
}
int ListSize(List* pl)
{
	return pl->size;
}
void DestroyList(List* pl)
{
	ListNode* q;
	while (pl->head)
	{
		q = pl->head->next;
		free(pl->head);
		pl->head = q;
	}
	pl->size = 0;
}
int InsertList(int pos, ListEntry e, List* pl)
{
	ListNode *p, *q;
	int i;
	if (p = (ListNode*)malloc(sizeof(ListNode)))
	{
		p->entry = e;
		p->next = NULL;
		if (pos == 0)
		{
			p->next = pl->head;
			pl->head = p;
		}
		else {
			for (q = pl->head, i = 0;i < pos - 1;i++)
			{
				q = q->next;
				p->next = q->next;
				q->next = p;
			}
		}
		pl->size++;
		return 1;
	}
	else
		return 0;
}
void DeleteList(int pos, ListEntry* pe, List* pl)
{
	ListNode* q, *temp;
	int i;
	if (pos == 0)
	{
		*pe= pl->head->entry;
		temp = pl->head->entry;
		free(pl->head);
		pl->head = temp;
	}
	else {
		for (q = pl->head, i = 0;i < pos - 1;i++)
		{
			q = q->next;
			*pe = q->next->entry;
			temp = q->next->next;
			free(q->next);
			q->next = temp;
		}
	}
	pl->size--;
}
void RetrieveList(int pos, ListEntry *pe, List* pl)
{
	int i;
	ListNode* q;
	for (q = pl->head, i = 0;i < pos;i++)
	{
		q = q->next;
	}
	*pe = q->entry;
}
void ReplaceList(int pos, ListEntry e, List* pl)
{
	int i;
	ListNode* q;
	for (q = pl->head, i = 0;i < pos;i++)
	{
		q = q->next;
	}
	q->entry=e;
}
void TraverseList(List* pl, void (*Display) (ListEntry))
{
	ListNode* p = pl->head;
	while (p)
	{
		(*Display)(p->entry);
		p = p->next;
	}
}