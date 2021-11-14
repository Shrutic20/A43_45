//
//  Write a program which return largest element from singly linear linked 
// list. 
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

int Maximum( PNODE Head)
{
    PNODE temp = Head;
    int max=temp->Data;
    while(temp!=NULL)
    {
    
        if(temp->Data>max)
        {
            max=temp->Data;
        }
        temp=temp->Next;
        
    }
    return max;
}

int main()
{
PNODE First = NULL;
int iAns=0;
InsertFirst(&First, 101);
InsertFirst(&First, 51);
InsertFirst(&First, 21);
InsertFirst(&First, 11);

iAns = Maximum(First);
printf("The maximum number is %d .",iAns);
return 0;
}