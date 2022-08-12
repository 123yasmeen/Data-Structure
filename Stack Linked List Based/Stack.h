#ifndef UNTITLED_STACK_H
#define UNTITLED_STACK_H
#define StackEntry int 
typedef struct stacknode
{
	StackEntry entry;
	struct stacknode* next;
}StackNode;
typedef struct stack {
	StackNode* top;
	int size;
}Stack;
void CreateStack(Stack*);
int Push(StackEntry, Stack*);
void Pop(StackEntry*, Stack*);
int StackEmpty(Stack*);
int StackFull(Stack*);
void ClearStack(Stack*);
void TraverseStack(Stack*, void (*) (StackEntry));
int StackSize(Stack*);
#endif
