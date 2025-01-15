#include<iostream>
using namespace std;
int minEl(int n, int MIN)
{
    if(n == 0) return MIN;

    if(n < MIN) MIN = n;
    cin>>n;

    return minEl(n, MIN);
}
int main()
{
    int n; cin >> n;
    cout<<minEl(n, 999);
    return 0;
}
