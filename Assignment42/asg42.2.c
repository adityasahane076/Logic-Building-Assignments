#include<stdio.h>
int Sum(int iNo)
{
    static int i = 0;
    static int iSum = 0;

    i = iNo;
    if (i > 0)
    {
        iSum = iSum + i%10;
        i = i /10;
        Sum(i);
    }

    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("Summation of digit is : %d",iRet);
    return 0;
}