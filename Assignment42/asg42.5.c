#include<stdio.h>
int Mult(int iNo)
{
    static int i = 0;
    static int iMult = 1;
    
    i = iNo;
    if (i > 0)
    {
        if (i % 10 != 0)
        {
            iMult = iMult * (i%10);
        }
        i = i/10;
        Mult(i);
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("Multiplication of digit is : %d",iRet);
    return 0;
}