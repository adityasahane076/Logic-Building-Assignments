#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0 , iCount = 0;

    for(iCnt = iSize - 1; iCnt >= 0  ; iCnt--)
    {
        if((Arr[iCnt] == iNo) )  
        {
            break;
        }
    }

    if( iCnt == 0)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }   
}    

int main()
{
    int iLength = 0, iRet = 0,iCnt = 0, iValue = 0;
    int * p = NULL;
   
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

    printf("Enter number :\n");
    scanf("%d",&iValue);

     iRet = LastOcc(p ,iLength,iValue);

     if(iRet == -1)
     {
        printf("Their is no such number\n");
     }
     else
     {
     printf("Last  occurance is at index %d",iRet);
     }

    free(p);

    return 0;
}