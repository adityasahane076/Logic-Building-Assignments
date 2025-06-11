#include<stdio.h>

void Display(char ch)
{
    char ch1 = '\0';

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(ch1 = ch ; ch1 <= 'Z' ; ch1++)
        {
            printf("%c\t",ch1);
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(ch1 = ch ; ch1 >= 'a' ; ch1--)
        {
            printf("%c\t",ch1);
        }
    }    


}
int main()
{
   char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}