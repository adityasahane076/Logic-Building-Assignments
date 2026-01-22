#include<iostream>
using namespace std;

template<class T>
void Reverse(T *Arr , int iSize )
{
    int iCnt = 0;
    T temp;
    for (iCnt = 0; iCnt < iSize/2 + 1; iCnt++)
    {
        temp = Arr[iCnt] ;
        Arr[iCnt] = Arr[iSize- 1 - iCnt];
        Arr[iSize -1 - iCnt] = temp;
    }
    
}

int main()
{
    int Arr[] = {10,20,30,40,50,60,70,80,90};
    
    int iCnt = 0;
    for(int iCnt = 0; iCnt < 9; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    } 
    Reverse(Arr, 9);
    cout<<"\n";

    for(iCnt = 0; iCnt < 9; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    } 
    return 0;
}