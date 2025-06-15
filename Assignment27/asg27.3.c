#include<stdio.h>

void StrCpyCap(char *src , char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';  
}

int main()
{
    char Arr[50] = "Marvellous Multi OS";
    char Brr[50] ={'\0'};

    StrCpyCap(Arr,Brr);
        
    printf("Copied Capital string is : %s\n",Brr);

    return 0;
}