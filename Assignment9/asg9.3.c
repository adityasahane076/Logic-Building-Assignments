#include<stdio.h>

int CountTwo(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    int iDigit = 0 , iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iCount++;
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

    iRet = CountTwo(iValue);

    printf("Frequency of 2 is %d",iRet);
    
    return 0;
}