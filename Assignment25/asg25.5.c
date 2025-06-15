#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
       if(*str == ' ')
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
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr);

    printf("No of blanks are : %d\n",iRet);
    
    return 0;
}