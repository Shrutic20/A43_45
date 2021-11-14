//
//
// Write a program which reverse each element of singly linked list.  
//



#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int Data;
    struct node *Next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;

    if (Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

void Reverse(PNODE Head)
{
   
   while(Head != NULL)
   {
       int iRev = 0,rem=0;
        int iNo=Head->Data;
        while(iNo!=0)
        {
        rem=iNo%10;
        iRev = (iRev*10)+rem;
        iNo=iNo/10;
        }
        printf("%d->",iRev);
       Head = Head->Next;
   }
 
}




int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 15);
    InsertFirst(&First, 11);
    InsertFirst(&First, 71);
    InsertFirst(&First, 26);

    Reverse(First);

    return 0;
}