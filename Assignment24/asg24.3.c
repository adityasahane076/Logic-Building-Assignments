#include<stdio.h>

int Difference(char *str)
{
    int iCount1 = 0 ,iCount2 = 0 ;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount1++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount2++;
        }
        str++;
    }

    return (iCount1 - iCount2);
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);
    
    printf("Difference between small and capital : %d \n",iRet);

    return 0;
}