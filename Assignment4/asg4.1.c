#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0, iMult = 1;

    for(iCnt = 1; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt)== 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf(" multiplication of factors is %d",iRet);

    return 0;
}