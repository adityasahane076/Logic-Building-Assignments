#include<stdio.h>

typedef unsigned int UNIT;

UNIT ToggleBit(UNIT iNo )
{
    UNIT iMask = 4026531855;
    UNIT iResult = 0;

    iResult = iNo ^ iMask;
    
    return iResult;
}

int main()
{
    UNIT iValue = 0;
    UNIT iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);


    iRet = ToggleBit(iValue);

    printf("The modified Bit number is : %d\n",iRet);
    return 0;
}