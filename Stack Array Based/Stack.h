#ifndef UNTITLED_STACK_H
#define UNTITLED_STACK_H
#define MAXSTACK 100
#define StackEntry int
typedef struct stack {
	int top;
	StackEntry entry[MAXSTACK];
}Stack;
void CreateStack(Stack*);
void Push(StackEntry*, Stack*);
void Pop(StackEntry*, Stack*);
int StackFull(Stack*);
int StackEmpty(Stack*);
void StackTop(StackEntry*, Stack*);
int StackSize(Stack*);
void ClearStack(Stack*);
void TraverseStack(Stack*, void (*)(StackEntry));
#endif // !UNTITLED_STACK_H