#include<stdio.h>

typedef unsigned int UNIT;

UNIT OffBit(UNIT iNo)
{
    UNIT iResult = 0;
    UNIT iMask = 0xF;

    iResult = iMask | iNo;

    return iResult;
}

int main()
{
    UNIT iValue = 0;
    UNIT iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("The updated Number is %d",iRet);
    return 0;
}