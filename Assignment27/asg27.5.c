#include<stdio.h>

void StrCatX(char *src , char *dest)
{
    while(*src != '\0')
    {
        src++;
    }
    while(*dest != '\0')
    {
        *src  = *dest  ;
        dest++;
        src++;
    }
    *dest = '\0';  
}

int main()
{
    char Arr[50] = "Marvellous multi OS";
    char Brr[50] ="Logic Building";

    StrCatX(Arr,Brr);
        
    printf("Concated string is : %s\n",Arr);

    return 0;
}