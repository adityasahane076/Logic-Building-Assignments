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

void DisplaySmall(PNODE first)
{
    PNODE temp = NULL;
    temp = first;
    int iMin = 0,iDigit = 0, iNo = 0;

    while(temp != NULL)
    {
        iMin = 9;
        iNo = temp -> data;

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
            
        }
        printf("%d\t",iMin);
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
    InsertFirst(&Head,280);
    InsertFirst(&Head,11);

    Dislpay(Head);

    DisplaySmall(Head);


    return 0;
}