//
// Write a program which return second maximum element from singly linear 
//linked list.
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

int SecMaximum( PNODE Head)
{
    PNODE temp = Head;
    PNODE t1=Head;
    int max=temp->Data,max1=t1->Data;
    while(temp!=NULL)
    {
    
        if(temp->Data>max)
        {
            max=temp->Data;
        }
        temp=temp->Next;
        
    }

    while(t1!=NULL)
    {
        if(t1->Data>max1 && t1->Data!=max)
        {
            max1=t1->Data;
        }
        t1=t1->Next;
    }
    return max1;
}

int main()
{
    PNODE First = NULL;
    int iRet=0;
    InsertFirst(&First, 10);
    InsertFirst(&First, 11);
    InsertFirst(&First, 7);
    InsertFirst(&First, 2);

    iRet= SecMaximum(First);
    printf("%d",iRet);
    return 0;
}