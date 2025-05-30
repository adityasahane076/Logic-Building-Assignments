#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0, iTable = 1;;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iTable = iCnt *2;
        printf("%d\t",iTable);
    }

}
int main()
{
    int iValue = 0;

    printf("Enter Number of elements\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}