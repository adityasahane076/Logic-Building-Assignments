#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iSize, int iNo1, int iNo2)
{
    int iCnt = 0 , iCount = 0;

    for(iCnt = 0; iCnt < iSize  ; iCnt++)
    {
        if((Arr[iCnt] >= iNo1) && Arr[iCnt] <= iNo2)  
        {
           printf("%d\t",Arr[iCnt]);
        }
    } 
}    

int main()
{
    int iLength = 0,iCnt = 0, iValue1 = 0 , iValue2 = 0;
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

    printf("Enter Start point:\n");
    scanf("%d",&iValue1);
    printf("Enter End point:\n");
    scanf("%d",&iValue2);
    
    Range(p ,iLength,iValue1,iValue2);

    free(p);

    return 0;
}