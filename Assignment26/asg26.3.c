#include<stdio.h>

int FirstChar(char *str,char ch)
{
    int iIndex = 0;
    while(*str != '\0')
    {
        iIndex++;
        if(*str == ch)
        {
            break;
        }
        str++;
    }
    if(*str == '\0')
    {
        return -1;
    }
    else
    {
        return iIndex;
    }    
}

int main()
{
    char Arr[50];
    char cValue ;
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character\n");
    scanf(" %c",&cValue);

    iRet = FirstChar(Arr,cValue);
    
    printf("First Index of %c in (%s) is : %d\n",cValue,Arr,iRet);
    
    return 0;
}