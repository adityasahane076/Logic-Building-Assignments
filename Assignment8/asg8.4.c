#include<stdio.h>

double FhtoCs(float fTemp)
{
    float cTemp = 0.0f;
   
    cTemp =((fTemp -32)*5/9);

    return cTemp;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahenhiet\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %f ",dRet);

    return 0;
}