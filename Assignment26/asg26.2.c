#include<stdio.h>

int ChkChar(char *str,char ch)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    
    return iCount;
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

    iRet = ChkChar(Arr,cValue);
    
    printf("Frequency of %c in (%s) is : %d\n",cValue,Arr,iRet);
    
    return 0;
}