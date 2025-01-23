#include<iostream>
using namespace std;

void replace(int* begin, int* end,
             int oldValue, int newValue);


void print(int* begin, int* end)
{
    while(begin < end)
    {
        cout<<*begin<<" ";
        ++begin;
    }
}

void merge(int* firstBegin, int* firstEnd,
           int* secondBegin, int* secondEnd)
{
    int sz1 = firstEnd - firstBegin;
    int sz2 = secondEnd - secondBegin;
    int sz_combined = sz1 + sz2;
    int *newArr = new int[sz_combined];

    int i = 0;
    while(firstBegin != firstEnd &&
          secondBegin != secondEnd)
    {
        if(*firstBegin < *secondBegin)
        {
            newArr[i++] = *firstBegin++;
        }
        else
        {
            newArr[i++] = *secondBegin++;
        }
    }

    while(firstBegin != firstEnd)
    {
        newArr[i++] = *firstBegin++;
    }
    while(secondBegin != secondEnd)
    {
        newArr[i++] = *secondBegin++;

    }

    print(newArr, newArr + sz_combined);

    delete[] newArr;
}

int main()
{
    int n = 5, m = 6;

    int *arr = new int[n];
    int *arr1 = new int[m];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin>>arr1[i];
    }


    merge(arr, arr+n, arr1, arr1+m);


//    cout<<(arr+5) - arr;

    delete[] arr;
    delete[] arr1;

    return 0;
}
