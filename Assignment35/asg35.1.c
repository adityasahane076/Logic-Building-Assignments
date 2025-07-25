#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

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

void DisplayPerfect(PNODE first)
{
    PNODE temp = NULL;
    temp = first;
    int iCnt = 0,iSum = 0;

    while(temp != NULL)
    {
        for(iCnt = 1,iSum = 0; iCnt <= (temp -> data)/2; iCnt++)
        {
            if((temp -> data) % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == (temp -> data))
        {
            printf("%d \t",temp->data);
        }
        temp = temp -> next;
    }
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

    InsertFirst(&Head,89);
    InsertFirst(&Head,6);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);

    Dislpay(Head);

    DisplayPerfect(Head);

    return 0;
}