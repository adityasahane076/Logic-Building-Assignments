#include<stdio.h>

void strlwrx(char *str)
{
    
    while(*str != '\0')
    {
       if((*str >= 'A') && (*str <= 'Z'))
       {
        *str = *str + 32;
       } 
       printf("%c",*str);
       str++;
    }
    
}

int main()
{
    char Arr[50];

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    strlwrx(Arr);
    
    return 0;
}