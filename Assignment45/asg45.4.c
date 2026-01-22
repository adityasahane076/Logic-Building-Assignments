#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool ChkIdentity(int **Arr,int iRow, int iCol)
{
    int i = 0, j = 0;
    bool bFlag = true;
    
    for (j = 0; j < iCol; j++)
    {    
        for(i = 0; i < iRow ; i++)
        {
            if (i == j)
            {
                if (! Arr[i][j] == 1)
                {
                    bFlag = false;
                }               
            }
            else if (i != j)
            {
                if (! Arr[i][j] == 0)
                {
                    bFlag = false;
                }
            } 
        }
    }   
    return bFlag;
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
    bool bRet = false;

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

    bRet = ChkIdentity(Arr,iRow,iCol);

    if (bRet == true)
    {
        printf("Matrix is Identity.\n");
    }
    else
    {
        printf("Matrix is not Identity.\n");
    }
    

    return 0;
}