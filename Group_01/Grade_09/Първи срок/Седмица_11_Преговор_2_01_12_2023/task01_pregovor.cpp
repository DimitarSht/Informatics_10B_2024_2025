#include<iostream>
using namespace std;
int main()
{
    int sz1, sz2;
    cin>>sz1>>sz2;
    int szCombined = sz1 + sz2;
    int arr1[sz1], arr2[sz2], arr3[szCombined];
    for(int i = 0; i < sz1; i++)
    {
        cin>>arr1[i];
    }
    for(int i = 0; i < sz2; i++)
    {
        cin>>arr2[i];
    }

    for(int i = 0; i < szCombined; i++)
    {
        if(i < sz1)
        {
            arr3[i] = arr1[i];
        }
        else
        {
            arr3[i] = arr2[i - sz1];
        }
    }

    /// Bubble sort
    for(int i = 0; i < szCombined - 1; i++)
    {
        for(int j = 0; j < szCombined - i - 1; j++)
        {
            if(arr3[j] > arr3[j+1])
            {
                swap(arr3[j], arr3[j+1]);
            }
        }
    }

    return 0;
}
