#include<stdio.h>

int CountRange(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    int iDigit = 0 , iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7))
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

    iRet = CountRange(iValue);

    printf("Frequency of digit between 3 and 7 is %d",iRet);
    
    return 0;
}