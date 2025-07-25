#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
// Incomplete 

typedef int BOOL;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}

int SecMaximum(PNODE first)
{
    PNODE temp = NULL;
    temp = first;
    int iMax1 = 0, iMax2 = 0;

    iMax1 = first -> data;
    iMax2 = first -> data;
    while(temp != NULL)
    {
        if ((temp ->data) > iMax2)
        {
            iMax2 = temp -> data;
        }
        
        temp = temp -> next;
        if((temp -> data) > iMax1)
        {
            iMax1 = temp -> data;
        }
    }

    return iMax2 ;
}

void Dislpay(PNODE first)
{
    PNODE temp = NULL;
    temp = first;
    while (temp != NULL)
    {
        printf("|%d|->",temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

int main()
{

    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,89);
    InsertFirst(&Head,22);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,20);
    InsertFirst(&Head,11);

    Dislpay(Head);

    iRet = SecMaximum(Head);
    printf("Second maximum element of linked list is : %d",iRet);


    return 0;
}