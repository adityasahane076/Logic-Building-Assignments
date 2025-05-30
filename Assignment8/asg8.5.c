#include<stdio.h>

double SquareMeter(int iNo)
{
    float sMeter = 0.0f;
   
    sMeter = iNo * 0.0929;

    return sMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%d square feet is %f square meter ",iValue,dRet);

    return 0;
}