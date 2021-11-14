//
//
// Write a program which display product of all digits of all element from 
// singly linear linked list. (Don’t consider 0)  
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

void DisplayProduct(PNODE Head)
{
   
   while(Head != NULL)
   {
       int iprod = 1,rem=0;
        int iNo=Head->Data;
        while(iNo!=0)
        {
        rem=iNo%10;
        if(rem!=0)
        {
        iprod=iprod*rem;
        }
        iNo=iNo/10;
        }
        printf("%d\n",iprod);
       Head = Head->Next;
   }
 
}




int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 10);
    InsertFirst(&First, 130);
    InsertFirst(&First, 7);
    InsertFirst(&First, 2);

    DisplayProduct(First);

    return 0;
}