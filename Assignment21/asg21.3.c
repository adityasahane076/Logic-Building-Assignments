#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0 ,iMax = 0,iMin = 0;
    
    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid input\n");
        return ;
    }

    iMax = Arr[0];
    iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
           iMax = Arr[iCnt];
        }
        
        if(Arr[iCnt] < iMin)
        {
           iMin = Arr[iCnt];
        }
    }
    return (iMax - iMin);
}
int main()
{
    int iLength = 0 ,iRet = 0, iCnt = 0;
    int *iPtr = NULL;

    printf("Enter no of elements\n");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));
    if((NULL == iPtr))
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements\n");
    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        printf("\nEnter the number %d :",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }


    iRet = Difference(iPtr, iLength);

    printf("Difference is %d \n",iRet);
    
    free(iPtr);

    return 0;
}
