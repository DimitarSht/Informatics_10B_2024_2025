#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    int sum, counter = 0;
    for(int i = 100; i < 1000; i++)
    {
        a = i % 10;
        b = i / 10 % 10;
        c = i / 100 % 10;
        sum = a + b + c;
        if(sum == 19)
        {
            counter++;
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<counter;


return 0;
}
