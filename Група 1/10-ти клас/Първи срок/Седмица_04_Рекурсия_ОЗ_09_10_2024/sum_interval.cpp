#include<iostream>
using namespace std;
int sumInterval(int a, int b)
{
    if(a == b) return a;
    return a + sumInterval(a+1,b);
}


int sum = 0;
void sumRes(int a, int b)
{
    if(a > b)
    {
        return;
    }
    sum += a;
    sumRes(a+1,b);
}

int main()
{
    sumRes(1, 10);
    cout<<sum;
    return 0;
}
