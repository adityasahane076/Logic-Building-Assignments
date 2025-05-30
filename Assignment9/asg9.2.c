#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    BOOL bfalg = FALSE;
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bfalg = TRUE;
            break;
        }
        iNo = iNo / 10;
    }

    return bfalg;
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contain Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }
    return 0;
}