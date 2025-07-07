#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UNIT;

BOOL ChkBit(UNIT iNo , UNIT iPos)
{
    UNIT iMask = 1;
    UNIT iResult = 0;

    iMask = iMask << iPos - 1;
    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UNIT iValue = 0, iLocation = 0;
    BOOL bRet = FALSE;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    printf("Enter the position\n");
    scanf("%d",&iLocation);

    bRet = ChkBit(iValue,iLocation);

    if(bRet == TRUE)
    {
        printf("Bit at %d position is ON\n",iLocation);
    }
    else
    {
        printf("Bit at %d positio is OFF\n",iLocation);
    }

    return 0;
}