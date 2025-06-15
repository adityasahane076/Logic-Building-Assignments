#include<stdio.h>

void ReverseDisplay(char *str)
{
    int iCount = 0, iCnt = 0;
    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    str--;
    for(iCnt = 0; iCnt <= iCount; iCnt++)
    {
        printf("%c",*str);
        str--;
    }
}

int main()
{
    char Arr[50];

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    ReverseDisplay(Arr);
    
    return 0;
}