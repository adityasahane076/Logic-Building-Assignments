#include<iostream>
using namespace std;

template<class T>
void Display(T value , int iSize)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<value<<"\t";
    }    
}

int main()
{
    Display('M',7);
    cout<<"\n";

    Display(7.5,6);

    return 0;
}