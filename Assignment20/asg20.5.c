#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iSize)
{
    int iCnt = 0 , iOdd = 1;

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)  
        {
         iOdd = iOdd * Arr[iCnt];   
        }
    }
    
    return iOdd;
}    

int main()
{
    int iLength = 0, iRet = 0,iCnt = 0;
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

     iRet = Product(p ,iLength);

     printf("Procuct of odd elements is %d",iRet);

    free(p);

    return 0;
}