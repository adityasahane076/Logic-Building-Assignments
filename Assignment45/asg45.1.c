#include<stdio.h>
#include<stdlib.h>
void Transpose(int **Arr,int iRow, int iCol)
{
    int i = 0, j = 0,iTemp = 0;

    
    for (i = 0; i < iRow - 1; i++)
    {    
        for(j = 1; j < iCol; j++)
        {
            if ((i != j) && (i < j))
            {
                iTemp = Arr[i][j];
                Arr[i][j] = Arr[j][i];
                Arr[j][i] = iTemp; 
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

    Transpose(Arr,iRow,iCol);
    

    Display(Arr,iRow,iCol);
    

    return 0;
}