#include<iostream>
using namespace std;

template<class T>

T Max(T *Arr, int iSize)
{
    T max = Arr[1];

    for (int i = 0; i < iSize; i++)
    {
        if(Arr[i] > max)
        {
            max = Arr[i];
        }
    }
    
    return max;
}

int main()
{
    int Arr[] = {10,20,30,90,50,60};
    float Brr[] = {10.1,90.2,30.3,40.4,50.5,60.6};
    
    int iRet = Max(Arr,6);
    printf("%d\n",iRet);

    float fRet = Max(Brr,6);
    printf("%f\n",fRet);

        return 0;
}