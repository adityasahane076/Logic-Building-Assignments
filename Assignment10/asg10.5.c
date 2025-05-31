#include<stdio.h>

int CountDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    
    int iDigit = 0 , iSumE = 0, iSumO = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit %2 ) == 0)
        {
            iSumE = iSumE + iDigit;
        }
        else
        {
            iSumO = iSumO + iDigit;
        }
        iNo = iNo / 10;
    }

    return (iSumE - iSumO);
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Difference between sum of even and odd digits is %d",iRet);
    
    return 0;
}