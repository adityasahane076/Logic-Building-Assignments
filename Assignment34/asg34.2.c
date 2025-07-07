#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if((*first) == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | ->",first -> data);
        first = first -> next;
    }
    printf("NULL\n");


}
int SearchLastOcc(PNODE first, int no)
{
    int iPos = 0,iCheck = 0;

    while( first != NULL)
    {
        iPos++;
        if(first -> data == no)
        {
           iCheck = iPos;
        }
        first = first -> next;
    }

    return iCheck;
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,70);
    InsertFirst(&head,30);
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);

    iRet = SearchLastOcc(head,30);

    printf("Last occurence of 30 is at position : %d\n",iRet);

    return 0;
}