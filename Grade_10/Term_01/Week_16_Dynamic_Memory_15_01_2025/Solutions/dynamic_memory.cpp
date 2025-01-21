#include<iostream>
using namespace std;
/// Задача 00 
void print(int* begin,int* end)
{
    while(begin < end)
    {
        cout<<begin<<" "<<*begin<<endl;
        begin++;
//        ++begin;
//        begin = begin + 1;
    }
}

/// Задача 01
int* upperBound(int* begin, int* end, int element)
{
    while(begin < end)
    {
        if(*begin == element)
        {
            return ++begin;
        }
        ++begin;
    }
    return nullptr;
}

/// Задача 02
bool equal(int* firstBegin, int* firstEnd,
           int* secondBegin, int* secondEnd)
{
    while(firstBegin < firstEnd &&
            secondBegin < secondEnd)
    {
        if(*firstBegin != *secondBegin)
        {
            return false;
        }
        ++firstBegin;
        ++secondBegin;
    }
    return true;
}

int main()
{
    int n = 5;
    int *arr = new int[n];
//    int *arr1 = new int[n];
    for(int i = 0; i < n; i++)
        cin>>arr[i];
//    for(int i = 0; i < n; i++)
//        cin>>arr1[i];

    /// Добавяне на нов елемент 
    int *newArr = new int[n+1];
    for(int i = 0; i < n; ++i)
    {
        newArr[i] = arr[i];
    }
    newArr[n++] = 6;
    delete[] arr;

    print(newArr, newArr + n);

    /// Изтриване на последния елемент
    int *delArr = new int[n-1];
    for(int i = 0; i < n - 1; ++i)
    {
        delArr[i] = newArr[i + 1];
    }
    n--;
    delete[] newArr;
    print(delArr, delArr + n);

//    cout<<boolalpha<<equal(arr, arr+n, arr1, arr1+n);
//    int *p = upperBound(arr, arr+n, 4);
//    cout<<p<<" "<<*p<<endl;

    delete[] delArr;
//    delete[] arr1;
    return 0;
}
