#include<stdio.h>

void strtogglex(char *str)
{
    
    while(*str != '\0')
    {
       if((*str >= 'A') && (*str <= 'Z'))
       {
        *str = *str + 32;
       } 
       else if((*str >= 'a') && (*str <= 'z'))
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

    strtogglex(Arr);
    
    return 0;
}