#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i =0 , j = 0 , iCnt = 0 ;
    if(iRow != iCol)
    {
        printf("Invalid input\n");
        return;
    }

    for(i = 1; i <= iRow ; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i <= j)
            {
                printf("%d\t",j);
            }
            else
            {
                printf(" \t");
            }
            
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