#include<stdio.h>

void StrRevX(char *str)
{
    int iCnt = 0 ,iCount = 0;
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

    StrRevX(Arr);
        
    return 0;
}