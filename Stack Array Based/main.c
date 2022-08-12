//main to be modified
#include<stdio.h>
#include"Stack.h"
void Display(StackEntry e)
{
	printf("%d\n", e);
}
int main()
{
	Stack s;
	StackEntry e;
	CreateStack(&s);
	int x = StackSize(&s);
	if (!StackFull(&s))
		Push(&e, &s);
	if (!StackEmpty(&s))
		Pop(&e, &s);
	if (!StackEmpty(&s))
		StackTop(&e, &s);
	ClearStack(&s);
	TraverseStack(&s, Display);
	return 0;
}