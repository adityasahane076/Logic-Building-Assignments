#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iSize)
{
    int iCnt = 0 ,iMax = 0,iDigit = 0 ,iSum = 0 ;  
    
    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid input\n");
        return ;
    }
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = 0;
        while((Arr[iCnt]) != 0)
        {
            iDigit = Arr[iCnt]  % 10;
            Arr[iCnt] = Arr[iCnt] / 10;
            iSum = iSum + iDigit;
        }
        printf("%d\t",iSum);
    }
}
int main()
{
    int iLength = 0 , iCnt = 0;
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
        printf("\nEnter the number %d:",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }


    DigitsSum(iPtr, iLength);

    free(iPtr);

    return 0;
}