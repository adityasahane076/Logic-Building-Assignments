import java.util.*;
class Matrix
{
    private char Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new char [A][B];
    }

    public void Pattern()
    {
        Scanner sobj = new Scanner(System.in);

        int i= 0, j= 0;
        char ch1 = 'A' ,ch2 = 'a';

        for(i = 0;i < Arr.length ;i++)
        {
            ch1 = 'A'; 
            ch2 = 'a';
            for(j = 0;j < Arr[i].length ;j++)
            {
                if((i % 2) == 0)
                {
                    Arr[i][j] = ch1;
                    ch1++;
                }
                else
                {
                    Arr[i][j] = ch2;
                    ch2++;
                }
                
            }  
        }   
    }


    public void Display()
    {
        System.out.println("elements of matrix are");

        int i= 0, j= 0;

        for(i = 0;i < Arr.length ;i++)
        {
            for(j = 0;j < Arr[0].length ;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }  
            System.out.println();
        }   
    }

}
class asg46_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Rows");
        int a = sobj.nextInt();
        
        System.out.println("Enter Columns");
        int b = sobj.nextInt();

        Matrix mobj = new Matrix(a,b);

        mobj.Pattern();

        mobj.Display();

    }
}