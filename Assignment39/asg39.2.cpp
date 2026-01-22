#include<iostream>
using namespace std;

template<class T>
int Frequency(T *Arr , int iSize, T No )
{
    int iCnt = 0, iCount = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == No)
        {
            iCount++;
        }
    }    

    return iCount;
}

int main()
{
    int Arr[] = {10,20,30,40,50,10,40,10,60};
    float Brr[] = {11.2,33.3,11.2,50.5,78.1,33.3,56.3,33.3};
    int iRet = 0;
    
    iRet = Frequency(Arr,9,10);

    cout<<"The frequency of 10 is : "<<iRet<<endl;

    iRet = Frequency(Brr,8,33.3);

    cout<<"The frequency of 33.3 is : "<<iRet<<endl;

    return 0;
}