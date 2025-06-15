#include<stdio.h>

void StrCpySmall(char *src , char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
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
    char Arr[50] = "Marvellous multi OS";
    char Brr[50] ={'\0'};

    StrCpySmall(Arr,Brr);
        
    printf("Copied Small string is : %s\n",Brr);

    return 0;
}