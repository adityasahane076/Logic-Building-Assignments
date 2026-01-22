#include<stdio.h>

int Max(int iNo)
{
    static int iDigit = 0;
    static int iMax = 0;

    iDigit = iNo % 10;

    if (iNo != 0)
    {
        if (iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo/10;
        Max(iNo);
    }
    
    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Max(iValue);

    printf("Largest digit is : %d\n",iRet);
    
    return 0;
}