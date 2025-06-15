#include<stdio.h>

int LastChar(char *str,char ch)
{
    int iIndex = 0 ,iCnt = 0 ,iCount = 0;

    if(str == NULL)
    {
        printf("Empty String\n");
        return -1;
    }
    
    while(*str != '\0')
    {
        iIndex++;
        str++;
    }
    str--;
    iCount = iIndex;
    for(iCnt = 0; iCnt <= iCount; iCnt++)
    {
        if(*str == ch)
        {
            break;
        }
        iIndex--;
        str--;
    }
    if(iCnt > iCount)
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
    char Arr[50] = {'\0'};
    char cValue ;
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character\n");
    scanf(" %c",&cValue);

    iRet = LastChar(Arr,cValue);
    
    printf("Last Index of %c in (%s) is : %d\n",cValue,Arr,iRet);
    
    return 0;
}