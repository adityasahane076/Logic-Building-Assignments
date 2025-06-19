#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCnt = 0 , iMul = 1;
    
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMul = iNo * iCnt;
        printf("%d\t",iMul);
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}