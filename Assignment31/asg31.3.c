#include<stdio.h>

typedef unsigned int UNIT;

UNIT ToggleBit(UNIT iNo)
{
    UNIT iResult = 0;
    UNIT iMask = 0x40;

    iResult = iMask ^ iNo;

    return iResult;
}

int main()
{
    UNIT iValue = 0;
    UNIT iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("The updated Number is %d",iRet);
    return 0;
}