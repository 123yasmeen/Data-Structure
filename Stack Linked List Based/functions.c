#include<stdlib.h>
#include"Stack.h"
void CreateStack(Stack* ps)
{
	ps->top = NULL;
	ps->size = 0;
}
int Push(StackEntry e, Stack* ps)
{
	StackNode* pn = (StackNode*)malloc(sizeof(StackNode));
	if (!pn)
		return 0;
	else {
		pn->entry = e;
		pn->next = ps->top;
		ps->top = pn;
		ps->size++;
		return 1;
	}
}
void Pop(StackEntry* pe, Stack* ps)
{
	StackNode* pn;
	*pe = ps->top->entry;
	pn = ps->top;
	ps->top = ps->top->next;
	free(pn);
	ps->size--;
}
int StackEmpty(Stack* ps)
{
	return ps->top == NULL;
}
int StackFull(Stack* ps)
{
	return 0;
}
void ClearStack(Stack* ps)
{
	StackNode* pn = ps->top;
	StackNode* qn = ps->top;
	while (pn)
	{
		pn = pn->next;
		free(qn);
		qn = pn;
	}
	ps->top = NULL;
	ps->size = 0;
}
void TraverseStack(Stack* ps, void(*pf)(StackEntry))
{
	StackNode* pn = ps->top;
	while (pn)
	{
		(*pf)(pn->entry);
		pn = pn->next;
	}
}
int StackSize(Stack* ps)
{
	return ps->size;
}