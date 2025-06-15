#include<stdio.h>

void struprx(char *str)
{
    
    while(*str != '\0')
    {
       if((*str >= 'a') && (*str <= 'z'))
       {
        *str = *str - 32;
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

    struprx(Arr);
    
    return 0;
}