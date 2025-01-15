#include<iostream>
using namespace std;
int cntOcc(int num, int key, int cnt)
{
    if(num == 0) return cnt;
    if(num % 10 == key) ++cnt;
    return cntOcc(num/=10, key, cnt);
}

void cntArr(int num, int arr[])
{
    if(num == 0) return;
    arr[num%10 - 1] += 1;
    cntArr(num /= 10, arr);
}

void output(int arr[], int sz, int i)
{
    if(sz == i) return;
    cout<<arr[i];
    output(arr, sz, ++i);
}

int main()
{
    int arr[] = {0,0,0,0,0,0,0,0,0,0};
    cntArr(1223, arr);
    for(int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<cntOcc(12221, 1, 0);
    return 0;
}
