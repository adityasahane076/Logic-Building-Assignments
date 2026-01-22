#include<stdio.h>
int Strlen(char * str)
{
    static int i = 0;
    static int iCount = 0;


    if (str[i] != '\0')
    {
        iCount++;
        i++;
        Strlen(str);
    }

    return iCount;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%s",Arr);

    iRet = Strlen(Arr);

    printf("Number of characters are : %d",iRet);
    return 0;
}