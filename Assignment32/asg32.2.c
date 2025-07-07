#include<stdio.h>

typedef unsigned int UNIT;

UNIT OffBit(UNIT iNo , UNIT iPos)
{
    UNIT iMask = 1;
    UNIT iResult = 0;

    iMask = iMask << iPos - 1;
    iMask = ~iMask;

    iResult = iNo & iMask;
    
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

    iRet = OffBit(iValue,iLocation);

    printf("The modified Bit number is : %d\n",iRet);
    return 0;
}