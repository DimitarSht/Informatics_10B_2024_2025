#include<iostream>
using namespace std;
int cntDigits(int n)
{
    if(n < 10) return 1;
    return 1 + cntDigits(n/=10);
}
int main()
{
    cout<<cntDigits(42891);
    return 0;
}
