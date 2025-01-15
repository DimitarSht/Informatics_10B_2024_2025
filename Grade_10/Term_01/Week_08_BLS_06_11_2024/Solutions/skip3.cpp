#include<iostream>
#include<cmath>
using namespace std;

int skip(int arr[], int sz, int target)
{
    int step = sqrt(sz);
    int start = 0;
    while(start < sz && arr[start] < target)
    {
        start += step;
        if(start >= sz) return -1;
    }
    int searched = min(start, sz);
    for(int i = start; i >= start - step + 1; i--)
    {
        if(arr[i - 1] != target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{

    int n = 10;
    int arr[] = {2, 2, 2, 5, 5, 9, 9, 9, 12, 15};
    cout<<skip(arr, 10, 9);
    return 0;
}
