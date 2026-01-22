#include<stdio.h>
#include<stdlib.h>
void SwapRow(int **Arr,int iRow, int iCol)
{
    int i = 0, j = 0,iTemp = 0;

    
    for (j = 0; j < iCol; j++)
    {
        for(i = 0; i < iRow; i++) 
        {
            if ((i % 2)== 0) 
           {
                iTemp = Arr[i][j];
                Arr[i][j] = Arr[i+1][j];
                Arr[i+1][j] = iTemp; 
           } 
        }
       
    }   
}    

void Display(int **Arr,int iRow, int iCol)
{
    int i = 0, j = 0;
    printf("Matrix is : \n");
    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            printf("%d\t",Arr[i][j]);
        }
        printf("\n");
        
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

    Display(Arr,iRow,iCol);

    SwapRow(Arr,iRow,iCol);
    

    Display(Arr,iRow,iCol);
    

    return 0;
}