#include<stdio.h>
int AddDiagonal(int **Arr,int iRow, int iCol)
{
    int i = 0, j = 0,iSum = 0;

    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            if (i == j)
            {
                iSum = iSum + Arr[i][j];
            }   
        }
    }
    return iSum;
}

int main()
{
    int i = 0, j = 0,iRow = 0,iCol = 0,iRet = 0;

    printf("Enter Number of Rows\n");
    scanf("%d",&iRow);

    printf("Enter Number of Columns\n");
    scanf("%d",&iCol);

    int ** Arr = (int **)malloc(sizeof(int *) * iRow);

    for (i = 0; i < iRow; i++)
    {
        Arr[i] = (int *)malloc(sizeof(int) * iCol);       
    }

    printf("Enter the number of elements : \n");

    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            scanf("%d",&Arr[i][j]);
        }
        
    }

    iRet = AddDiagonal(Arr,iRow,iCol);


    printf("Sum of Diagonal elements is : %d",iRet);
    return 0;
}