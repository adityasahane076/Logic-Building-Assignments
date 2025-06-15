#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL ChkChar(char *str,char ch)
{

    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }

    if(*str == '\0')
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    char Arr[50];
    char cValue ;
    BOOL bRet = FALSE;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);
    
    if(bRet == TRUE)
    {
        printf("%c is present in %s\n",cValue,Arr);
    }
    else
    {
        printf("%c is not present in %s\n",cValue,Arr);
    }
    
    return 0;
}