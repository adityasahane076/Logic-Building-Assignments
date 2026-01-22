#include<stdio.h>

int Frequency(int **Arr,int iRow, int iCol,int iNo)
{
    int i = 0, j = 0,iCount = 0;

    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            if (Arr[i][j] == iNo)
            {
                iCount++;
            }   
        }
    }
    return iCount++;
}

int main()
{
    int i = 0, j = 0,iValue = 0,iRow = 0,iCol = 0,iRet = 0;

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


    printf("Enter Number to find frequency\n");
    scanf("%d",&iValue);

    iRet = Frequency(Arr,iRow,iCol,iValue);


    printf("Frequency of  %d is %d",iValue,iRet);
    return 0;
}