#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iSumf = 0, iSumNf = 0;

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSumNf = iSumNf + iCnt;
        }
        else if((iNo % iCnt) ==0)
        {
            iSumf = iSumf + iCnt;
        }
    }
    
    return (iSumf - iSumNf);
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference between sum of all factors and  non factors is  %d\n",iRet);

    return 0;
}