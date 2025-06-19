#include<stdio.h>

void PrintEven(int iNo)
{  
    if(iNo < 0)
    {
        return;
    }
    int iCnt = 0, iEven = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iEven = iEven + 2;
        printf("%d\t",iEven);
    }


}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}