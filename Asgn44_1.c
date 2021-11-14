//
// Write a program which displays all elements which are perfect from singly 
// linear linked list. 
//
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

void  DisplayPerfect( PNODE Head)
{
    PNODE temp = Head;
    while(temp!=NULL)
    {
        int add=0;
        int i=0;
        for(i=1;i<=(temp->Data)/2;i++)
        {
            if((temp->Data)%i==0)
            {
                add=add+i;
            }
        }
        if(add==(temp->Data))
        {
           printf("%d\t",add);
        }
        temp=temp->Next;
        
    }
    
}

int main()
{
PNODE First = NULL;

InsertFirst(&First, 101);
InsertFirst(&First, 51);
InsertFirst(&First, 28);
InsertFirst(&First, 6);

DisplayPerfect(First);
return 0;
}