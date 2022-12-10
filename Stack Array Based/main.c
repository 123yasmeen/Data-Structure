//main to be modified
#include<stdio.h>
#include"Stack.h"
void Display(StackEntry e)
{
    printf("%d\n", e);
}
int main()
{
    int choice;
    Stack s;
    StackEntry e;
    CreateStack(&s);
    int x = StackSize(&s);
    while(1) {
        printf("enter 0 to push or 1 to pop or 2 to get stack top or 3 to clear the stack or 4 to display the stack 5 to close the program\n");
        scanf("%d",&choice);
        switch(choice) {
            case 0: if (!StackFull(&s)) {
                printf("enter the element you want to push\n");
                scanf("%d",&e);
                    Push(e,&s);
                }
                break;
            case 1: if (!StackEmpty(&s)) {
                    Pop(&e, &s);
                    printf("%d\n",e);
                }
                break;
            case 2: if (!StackEmpty(&s))
                StackTop(&e, &s);
                break;
            case 3: ClearStack(&s);
            break;
            case 4:TraverseStack(&s, Display);
            break;
            case 5: return 0;
            default:
                printf("ERROR\n");
        }
    }

    return 0;
}