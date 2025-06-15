#include<stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;

    if(*str == '\0')
    {
        return 0;
    }
    while(*str != '\0')
    {
        printf("%c ",*str);
        if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = CountCapital(Arr);
    
    printf("Number of Capital Letters are : %d \n",iRet);

    return 0;
}