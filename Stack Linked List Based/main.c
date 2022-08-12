#include<stdio.h>
#include<stdlib.h>
#include"Stack.h"

void Display(StackEntry e)
{
    printf("%d", e);
}
int main() {
    Stack s;
    int e;
    CreateStack(&s);
    if (!Push(5, &s))
        printf(".......");//An action should happen here
    Pop(&e, &s);
    ClearStack(&s);
    TraverseStack(&s, Display);
    StackSize(&s);
    return 0;
}