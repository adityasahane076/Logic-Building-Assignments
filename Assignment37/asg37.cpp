#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int size;

    public:
        Array(int value = 10);
        Array(Array &ref);
        ~Array();
        inline void Accept();
        inline void Display();
};

Array::Array(int value)
{
    this->size = value;
    this->Arr = new int[size];
}

Array::Array(Array &ref)
{
    this->size = ref.size;
    this->Arr = new int[this->size];

    for (int i = 0; i < size; i++)
    {
        this->Arr[i] = ref.Arr[i];
    }
    
}

Array::~Array()
{
    delete []Arr;
}

void Array::Accept()
{

    cout<<"Please enter the elements : \n";
        for (int i = 0; i <this->size; i++)
        {
            cin>>Arr[i];
        }
}

void Array::Display()
{
    cout<<"Elements are :\n";
        for (int i = 0; i <this->size; i++)
        {
            cout<<Arr[i]<<"\t";
        }
        cout<<endl;
}

class ArrSearch : public Array
{
    public:
        ArrSearch(int no = 10):Array(no)
        {}

        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();
};
int ArrSearch::SearchFirst(int value)
{
    int i = 0;

    for ( i = 0; i < size; i++)
    {
        if (Arr[i] == value)
        {
            break;
        }
    }
    if(i == size)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}

int ArrSearch::Frequency(int value)
{
    int i = 0, Count = 0;

    for ( i = 0; i < size; i++)
    {
        Count++;
    }
    
    return Count;
}

int ArrSearch::SearchLast(int value)
{
    int i = 0;

    for ( i = size - 1; i >= 0; i--)
    {
        if (Arr[i] == value)
        {
            break;
        }
    }
    if(i < 0)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}

int ArrSearch::EvenCount()
{
    int i = 0, Count = 0;

    for ( i = 0; i < size; i++)
    {
        if (Arr[i] % 2 == 0)
        {
            Count++;
        }    
    }
    
    return Count;
}

int ArrSearch::OddCount()
{
    int i = 0, Count = 0;

    for ( i = 0; i < size; i++)
    {
        if (Arr[i] % 2 != 0)
        {
            Count++;
        }    
    }
    
    return Count;
}

int ArrSearch::SumAll()
{
    int i = 0, iSum = 0;

    for ( i = 0; i < size; i++)
    {
        iSum = iSum + Arr[i];
    }
    
    return iSum;
}

int main()
{
    ArrSearch sobj1(7);
    int iRet = 0;

    sobj1.Accept();
    sobj1.Display();

    iRet = sobj1.Frequency(11);

    cout<<"The frequency is "<<iRet<<"\n";

    iRet = sobj1.SearchLast(5);

    cout<<"The Last occurance is at index "<<iRet<<"\n";

    iRet = sobj1.SearchFirst(9);

    
    return 0;
}