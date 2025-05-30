#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iSize)
{
    int iCnt = 0 ,iMax = 0,iCount = 0 , iNo = 0;  
    
    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid input\n");
        return ;
    }
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iCount = 0;
        iNo = Arr[iCnt];  
        while(iNo != 0)
        {
            iNo = iNo / 10;
            iCount++;
            if(iCount == 3)
            {
                printf("%d\t",Arr[iCnt]);
            }
        }
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


    Digits(iPtr, iLength);

    free(iPtr);

    return 0;
}