#include<stdio.h>
int MaxDiagonal(int **Arr,int iRow, int iCol)
{
    int i = 0, j = 0,iMax = 0;

    iMax = Arr[0][0];
    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            if ((i == j) || (i + j == (((iRow + iCol)/2)-1)))
            {
                if (Arr[i][j] > iMax)
                {
                    iMax == Arr[i][j];
                }
            }   
        }
    }
    return iMax;
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

    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            printf("%d\t",Arr[i][j]);
        }
        printf("\n");
        
    }
    iRet = MaxDiagonal(Arr,iRow,iCol);


    printf("Largest of both Diagonal elements is : %d",iRet);
    return 0;
}