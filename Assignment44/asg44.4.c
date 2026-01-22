#include<stdio.h>
#include<stdlib.h>
void AddColumn(int **Arr,int iRow, int iCol)
{
    int i = 0, j = 0,iSum = 0;

    
    for (j = 0; j < iCol; j++)
    {
        iSum = 0;
        for(i = 0; i < iRow; i++) 
        {
            iSum = iSum + Arr[i][j];
        }
        printf("%d\t",iSum);
    }   
}    

int main()
{
    int i = 0, j = 0,iRow = 0,iCol = 0;

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
    AddColumn(Arr,iRow,iCol);
    return 0;
}