#include<iostream>
using namespace std;
int main()
{
    int sz = 6;
    int arr[sz] = {1,2,3,4,5,6};
    for(int i = 2; i < sz - 2; i++)
    {
        cout<<arr[i]<<" ";
    }

    double delitel = 0;
    for(int i = 0; i < newSz; i++)
    {
        delitel += (1/arr[i]);
    }
    double harmonic = sz / delitel;

    return 0;
}

