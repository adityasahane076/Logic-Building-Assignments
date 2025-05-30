#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char ch)
{
     if((ch == 'a')||(ch == 'e')||(ch == 'i')||(ch == 'o')||(ch == 'u')||(ch == 'A')||(ch == 'E')||(ch == 'I')||(ch == 'O')||(ch == 'U'))

    {
      return TRUE;
    }
    else 
    {
      return FALSE;
    }
}
int main()
{
    
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character\n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);
    
    if(bRet == TRUE)
    {
      printf("%c is a vowel\n",cValue);
    }
    else
    {
      printf("%c is not a vowel\n",cValue);
    }

    return 0;
}