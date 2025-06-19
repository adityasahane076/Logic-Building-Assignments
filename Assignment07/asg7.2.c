#include<stdio.h>
int DollarToInr(int iNo)
{
    int iDollar = 0;

    iDollar = iNo * 70;

    return iDollar;
}
int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number of USD\n");
    scanf("%d",&iValue);

    iRet = DollarToInr(iValue);

    printf("Value of INR is %d",iRet);

    return 0;
}