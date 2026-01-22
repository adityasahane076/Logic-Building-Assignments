#include<stdio.h>
void Display(int iNo)
{
    static int i = 0;

    i = iNo;
    if (i > 0)
    {
        printf("%d\t*\t",i);
        i--;
        Display(i);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}