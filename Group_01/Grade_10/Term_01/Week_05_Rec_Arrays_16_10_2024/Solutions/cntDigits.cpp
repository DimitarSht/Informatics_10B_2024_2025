#include<iostream>
using namespace std;
void cntDigits(int num, int result)
{
    if(num == 0)
    {
        cout<<result;
        return;
    }
    cntDigits(num/=10, result++);
}
int main()
{
    cntDigits(1234, 0);
    return 0;
}
