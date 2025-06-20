#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UNIT;

BOOL ChkBit(UNIT iNo)
{
    UNIT iMask = 16384;
    UNIT iResult = 0;

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
    UNIT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is OFF\n");
    }


    return 0;
}