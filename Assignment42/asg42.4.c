#include<stdio.h>
int Fact(int iNo)
{
    static int i = 0;
    static int iFact = 1;

    i = iNo;
    if (i > 0)
    {
        iFact = iFact * i;
        i--;
        Fact(i);
    }

    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("Factorial of number is : %d",iRet);
    return 0;
}