//
// Write a program which search first occurrence of particular element from 
// singly linear linked list. 
// Function should return position at which element is found.
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

int SearchFirstOcc( PNODE Head , int no )
{
    PNODE temp = Head;
    int occ=1;
   
    while(temp!=NULL)
    {
    
        if(temp->Data==no)
        {
            return occ;
        }
        temp=temp->Next;
        occ++;
    }
}

int main()
{
PNODE First = NULL;
int iAns=0;
InsertFirst(&First, 101);
InsertFirst(&First, 51);
InsertFirst(&First, 21);
InsertFirst(&First, 11);

iAns = SearchFirstOcc(First,51);
printf("The number is occured at %d position.",iAns);
return 0;
}