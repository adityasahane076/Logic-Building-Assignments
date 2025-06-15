#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL CountSmall(char *str)
{
    BOOL bFlag =FALSE;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            bFlag = TRUE;
        }
        str++;
    }

    return bFlag;
}

int main()
{
    char Arr[50];
    BOOL bRet = FALSE;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    bRet = CountSmall(Arr);
    
    if(bRet == TRUE)
    {
        printf("Vowel present\n");
    }
    else
    {
        printf("No Vowel is present\n");
    }
    
    return 0;
}