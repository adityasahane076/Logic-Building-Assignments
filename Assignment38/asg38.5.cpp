#include<iostream>
using namespace std;

template<class T>

T Min(T *Arr, int iSize)
{
    T min = Arr[1];

    for (int i = 0; i < iSize; i++)
    {
        if(Arr[i] < min)
        {
            min = Arr[i];
        }
    }
    
    return min;
}

int main()
{
    int Arr[] = {10,20,30,90,50,8};
    float Brr[] = {10.1,90.2,30.3,40.4,5.5,60.6};
    
    int iRet = Min(Arr,6);
    printf("%d\n",iRet);

    float fRet = Min(Brr,6);
    printf("%f\n",fRet);

        return 0;
}