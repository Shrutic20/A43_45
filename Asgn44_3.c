//
// Write a program which returns addition of all even element from singly 
// linear linked list. 
//
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

int AdditionEven(PNODE Head)
{
   int sum=0;
   while(Head != NULL)
   {
       if(Head->Data %2==0)
       {
           sum=sum+Head->Data;
       }
          
       Head = Head->Next;
   }
    return sum;
}

int main()
{
    PNODE First = NULL;
    int iRet=0;
    InsertFirst(&First, 10);
    InsertFirst(&First, 11);
    InsertFirst(&First, 7);
    InsertFirst(&First, 2);

    iRet= AdditionEven(First);
    printf("%d",iRet);
    return 0;
}