#include<stdio.h>

typedef unsigned int UNIT;

UNIT OnBit(UNIT iNo , UNIT iPos)
{
    UNIT iMask = 1;
    UNIT iResult = 0;

    iMask = iMask << iPos - 1;

    iResult = iNo | iMask;
    
    return iResult;
}

int main()
{
    UNIT iValue = 0, iLocation = 0;
    UNIT iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    printf("Enter the position\n");
    scanf("%d",&iLocation);

    iRet = OnBit(iValue,iLocation);

    printf("The modified Bit number is : %d\n",iRet);
    return 0;
}