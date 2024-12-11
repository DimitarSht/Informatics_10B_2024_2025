#include<iostream>
using namespace std;
void input(int arr[], int sz)
{
    for(int i = 0; i < sz; i++)
        cin>>arr[i];
}
void output(int arr[], int sz)
{
    for(int i = 0; i < sz; i++)
        cout<<arr[i]<<" ";
}

void sorting(int arr[], int sz)
{
    for(int i = 1; i < sz;i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int n, m, sumMin = 0, sumMax = 0, a;
    cin>>n>>m;
    int arr[n];
    input(arr, n);
    sorting(arr, n);
    output(arr, n);

    a = n - m;
    
    for(int i = 0; i < a;i++)
    {
        sumMin = sumMin + arr[i];
    }
    for(int i = n - 1; i >= n - a;i--)
    {
        sumMax = sumMax + arr[i];
    }

    cout<<"sumMin"<<" "<<sumMin<<endl;
    cout<<"sumMax"<<" "<<sumMax<<endl;
    return 0;
}
