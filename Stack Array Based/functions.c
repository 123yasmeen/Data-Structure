#include "Stack.h"
void CreateStack(Stack* ps)
{
	ps->top = 0;
}
void Push(StackEntry* pe, Stack* ps)
{
	ps->entry[ps->top++] = pe;
}
void Pop(StackEntry* pe, Stack* ps)
{
	*pe = ps->entry[--ps->top];
}
int StackFull(Stack* ps)
{
	if (ps->top == MAXSTACK)
		return 1;
	else
		return 0;
}
int StackEmpty(Stack* ps)
{
	if (ps->top == 0)
		return 1;
	else
		return 0;
}
void StackTop(StackEntry* pe, Stack* ps)
{
	*pe = ps->entry[ps->top - 1];
}
int StackSize(Stack* ps)
{
	ps->top;
}
void ClearStack(Stack* ps)
{
	ps->top = 0;
}
void TraverseStack(Stack* ps, void(*pf)(StackEntry))
{
	for (int i = ps->top;i > 0;i--)
	{
		(*pf)(ps->entry[i - 1]);
	}
}