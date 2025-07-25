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

void DisplayPallindrome(PNODE first)
{
    PNODE temp = NULL;
    temp = first;
    int iDigit = 0, iNo = 0,iRev = 0;

    while(temp != NULL)
    {
        iRev = 0;
        iNo = temp -> data;

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = iRev *10 + iDigit;
            iNo = iNo / 10;
        }
        
       if((temp -> data) == iRev)
       {
        printf("%d\t",iRev);
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
    InsertFirst(&Head,22);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,404);
    InsertFirst(&Head,11);

    Dislpay(Head);

    DisplayPallindrome(Head);

    return 0;
}