//
//
// Write a program which display addition of digits of element from singly 
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

void SumDigit(PNODE Head)
{
   
   while(Head != NULL)
   {
       int iSum = 0,rem=0;
        int iNo=Head->Data;
        while(iNo!=0)
        {
        rem=iNo%10;
        iSum=iSum+rem;
        iNo=iNo/10;
        }
        printf("%d\n",iSum);
       Head = Head->Next;
   }
 
}




int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 10);
    InsertFirst(&First, 11);
    InsertFirst(&First, 7);
    InsertFirst(&First, 2);

    SumDigit(First);

    return 0;
}