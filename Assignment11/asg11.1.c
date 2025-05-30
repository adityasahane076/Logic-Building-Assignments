#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1,ch = 'A'; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
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