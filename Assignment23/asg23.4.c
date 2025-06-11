#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef  int BOOL;

BOOL Display(char ch)
{
    char ch1 = '\0';

    if((ch == '!') || (ch <= '@') || (ch <= '#') || (ch <= '$') || (ch <= '%') || (ch <= '^') || (ch <= '&') || (ch <= '*'))
    {
       return TRUE;
    }
    else 
    {
        return FALSE;
    }    


}
int main()
{
   char cValue = '\0';
   BOOL bRet = FALSE;

    printf("Enter the character\n");
    scanf("%s",&cValue);

    bRet = Display(cValue);

    if(bRet == TRUE)
    {
        printf("It is a special Character\n");
    }
    else
    {
        printf("It is not a special Character\n");
    }

    return 0;
}