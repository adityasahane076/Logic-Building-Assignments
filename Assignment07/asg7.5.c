#include<stdio.h>
int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0 , iEFact = 1 ,iOFact = 1;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEFact = iEFact * iCnt;
        }
        else
        {
            iOFact = iOFact *iCnt;
        }
    }
    return (iEFact - iOFact);
}
int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d ",iRet);

    return 0;
}