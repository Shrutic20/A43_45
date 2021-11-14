//
// Write a program which displays all elements which are prime from singly 
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

void DisplayPrime(PNODE Head)
{
   int i = 0;
   while(Head != NULL)
   {
       for (i = 2; i < Head->Data; i++)
       {
           if (Head->Data % i == 0)
           {
              break;
           }
 
       }
       if(Head->Data == i)
        {
            printf("%d\n",Head->Data);
        }
          
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

    DisplayPrime(First);

    return 0;
}