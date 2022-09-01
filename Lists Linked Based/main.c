//main would be modified
#include<stdio.h>
#include<stdlib.h>
#include "list.h"
void Display(ListEntry e)
{
	printf("%d", e);
}
int main()
{
	List l;
	int e=0;
	Display(e);
	return 0;
}