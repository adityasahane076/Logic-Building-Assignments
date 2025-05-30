#include<stdio.h>

int MultDigits(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    int iDigit = 0 , iCount = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
        iCount = iCount * iDigit;
        }
        iNo = iNo / 10;
    }

    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of all digits is %d",iRet);
    
    return 0;
}