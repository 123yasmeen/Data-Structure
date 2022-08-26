#ifndef UNTITLED_STACK_H
#define UNTITLED_STACK_H
#define ListEntry int 
#define MAXLIST 100
typedef struct list
{
	ListEntry entry[MAXLIST];
	int size;
}List;
void CreateList(List*);
int ListEmpty(List*);
int ListFull(List*);
int ListSize(List*);
void DestroyList(List*);
void InsertList(int, ListEntry, List*);
void DeleteList(int, ListEntry*, List*);
void RetrieveList(int, ListEntry*, List*);
void ReplaceList(int, ListEntry, List*);
void TraverseList(List*, void (*) (ListEntry));
#endif
