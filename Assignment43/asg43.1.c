#include<stdio.h>

int WhiteSpace(char *str)
{
    static char ch = '\0';
    static int i = 0;
    static int iCount = 0;

    ch = str[i];
    if(ch != '\0')
    {
        if (ch == ' ')
        {
            iCount++;
        }
        i++;
        WhiteSpace(str);
    }
    return iCount;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    iRet = WhiteSpace(Arr);

    printf("No of blanks are : %d\n",iRet);
    
    return 0;
}