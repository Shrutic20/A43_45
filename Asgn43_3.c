//
// Write a program which returns addition of all element from singly linear 
// linked list.
//


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef struct node
{
 int Data;
 struct node *Next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head , int no )
{
 PNODE newn = NULL;
 
 newn = (PNODE)malloc(sizeof(NODE));
 
 newn->Next = NULL;
 newn->Data = no;
 if (*Head == NULL)
 {
 *Head = newn;
 }
 else
 {
 newn -> Next = *Head;
 *Head = newn;
 }
}

int Addition( PNODE Head)
{
    PNODE temp = Head;
    int add=0;
    while(temp!=NULL)
    {
        add= add+temp->Data;
        temp=temp->Next;
        
    }
    return add;
}

int main()
{
PNODE First = NULL;
int iAns=0;
InsertFirst(&First, 101);
InsertFirst(&First, 51);
InsertFirst(&First, 21);
InsertFirst(&First, 11);

iAns = Addition(First);
printf("The addition is %d .",iAns);
return 0;
}