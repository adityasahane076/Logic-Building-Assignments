#include<stdio.h>
void Table(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0, iTable = 1;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
      iTable = iCnt * iNo;
      printf("%d\t",iTable);
    }

    
}
int main()
{
    int iValue = 0 ;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}