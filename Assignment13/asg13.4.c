#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i =0 , j = 0 ;

    for(i = iRow; i >= 1 ; i--)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}
int main()
{ int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and columns\n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);



    return 0;
}