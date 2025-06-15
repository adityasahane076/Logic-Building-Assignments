#include<stdio.h>

void StrNCpyX(char *src , char *dest, int iCnt)
{
    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    *dest = '\0';  
}

int main()
{
    char Arr[50] = "Marvellous Multi OS";
    char Brr[50] ={'\0'};

    StrNCpyX(Arr,Brr,10);
        
    printf(" Copied string with 10 characters is : %s\n",Brr);

    return 0;
}