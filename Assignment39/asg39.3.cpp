#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *Arr , int iSize, T No )
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == No)
        {
            break;;
        }
    }    
    if (iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt+1;
    }
}

int main()
{
    int Arr[] = {10,20,30,40,50,10,40,10,60};
    float Brr[] = {11.2,33.3,11.2,50.5,78.1,33.3,56.3,33.3};
    int iRet = 0;
    
    iRet = SearchFirst(Arr,9,10);

    cout<<"The First occurance of 10 is : "<<iRet<<endl;

    iRet = SearchFirst(Brr,8,33.3f);

    cout<<"The First Occurance of 33.3 is : "<<iRet<<endl;

    return 0;
}