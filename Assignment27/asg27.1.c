#include<stdio.h>

void StrCpyX(char *src , char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';  
}

int main()
{
    char Arr[50] = "Marvellous Multi OS";
    char Brr[50] ={'\0'};

    StrCpyX(Arr,Brr);
        
    printf(" Copied string is : %s",Brr);

    return 0;
}