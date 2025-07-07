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
int Minimum(PNODE first)
{
    int iMax = 0;

    iMax = first -> data;
    while( first != NULL)
    {
       if(first -> data < iMax )
       {
        iMax = first -> data;
       }
        first = first -> next;
    }

    return iMax;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,640);
    InsertFirst(&head,240);
    InsertFirst(&head,20);
    InsertFirst(&head,230);
    InsertFirst(&head,110);

    Display(head);

    iRet = Minimum(head);

    printf("Minimum of all elements is : %d\n",iRet);

    return 0;
}