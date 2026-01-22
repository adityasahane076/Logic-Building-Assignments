#include<stdio.h>
void Display(int iNo)
{
    static int i = 0;
    static int j = 0;
    i = iNo - j;

    if (i >= 1)
    {
        printf("%d\t",i);
        i--;
        j++;
        Display(iNo);
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