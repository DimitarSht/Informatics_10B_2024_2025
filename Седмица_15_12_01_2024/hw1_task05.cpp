#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter elements of the array:";
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int jump[n];
    jump[0]=0;
    for(int i=1; i < n; i++)
    {
        jump[i]=INT_MAX;
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j< i; j++)
        {
            if(arr[j] != INT_MAX && arr[j] + j >= i)
            {
                if(jump[i] > jump[j] + 1)
                {
                    jump[i]= jump[j] + 1;
                }
            }

        }
    }
    cout<<jump[n-1];

    return 0;
}
    /// 10 / 10 т.
