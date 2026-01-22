#include<stdio.h>

int Small(char *str)
{
    static char ch = '\0';
    static int i = 0;
    static int iCount = 0;

    ch = str[i];
    if(ch != '\0')
    {
        if (ch >= 'a' && ch <= 'z')
        {
            iCount++;
        }
        i++;
        Small(str);
    }
    return iCount;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    iRet = Small(Arr);

    printf("No of small characters are : %d\n",iRet);
    
    return 0;
}