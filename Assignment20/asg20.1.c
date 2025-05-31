#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[], int iSize , int iNo)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt] == iNo) )  
        {
            bFlag = TRUE;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0;
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

    printf("Enter element to check\n");
    scanf("%d",&iValue);

     bRet = Check(p , iLength, iValue);

     if(bRet == TRUE)
     {
        printf("%d is present\n",iValue);
     }
     else
     {
        printf("%d is absent\n",iValue);
     }

    free(p);

    return 0;
}