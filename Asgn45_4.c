//
//
// Write a program which display smallest digits of all element from singly 
// linear linked list.
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

void DisplaySmall(PNODE Head)
{
   
   while(Head != NULL)
   {
       int small=10,rem=0;
        int iNo=Head->Data;
        while(iNo!=0)
        {
        rem=iNo%10;
        if(rem<small)
        {
            small=rem;
        }
        iNo=iNo/10;
        }
        printf("%d\n",small);
       Head = Head->Next;
   }
 
}




int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 88);
    InsertFirst(&First, 130);
    InsertFirst(&First, 71);
    InsertFirst(&First, 27);

    DisplaySmall(First);

    return 0;
}