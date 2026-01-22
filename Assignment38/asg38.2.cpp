#include<iostream>
using namespace std;

template<class T>

T Max(T no1 , T no2, T no3)
{
    if (no1 > no2 && no1 > no3)
    {
        return no1;
    }
    else if (no2 > no3)
    {
        return no2;
    }
    else
    {
        return no3;
    }
    
}

int main()
{

    int iRet = Max(18,19,15);
    
    cout<<"Max Number is "<<iRet;
    return 0;
}