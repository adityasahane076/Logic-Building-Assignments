#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    char ch = 0;

    for(iCnt = 0; iCnt <=255 ; iCnt++, ch++)
    {
    printf(" Symbol : %c | Decimal : %d | Hexadecimal : %x | Octadecimal : %o\n",ch,ch,ch,ch);

    }


}
int main()
{
    DisplayASCII();

    return 0;
}