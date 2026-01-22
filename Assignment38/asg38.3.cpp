#include<iostream>
using namespace std;

template<class T>

T AddN(T *Arr, int iSize)
{
    T sum;
    
    for (int i = 0; i < iSize; i++)
    {
        sum = sum + Arr[i];
    }
    
    return sum;
}

int main()
{
    int Arr[] = {10,20,30,40,50,60};
    float Brr[] = {10.1,20.2,30.3,40.4,50.5,60.6};

    int iRet = AddN(Arr,6);
    cout<<"Addition is : "<<iRet<<"\n";

    float fRet = AddN(Brr,6);
    cout<<"Addition is : "<<fRet<<"\n";

    return 0;
}