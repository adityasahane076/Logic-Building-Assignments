#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[], int iSize)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt] == 11) )  
        {
            bFlag = TRUE;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int iLength = 0, iCnt = 0;
    int * p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iLength);
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        printf("Enter number %d :",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

     bRet = Check(p , iLength);

     if(bRet == TRUE)
     {
        printf("11 is present\n");
     }
     else
     {
        printf("11 is absent\n");
     }

    free(p);

    return 0;
}