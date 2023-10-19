#include<iostream>
using namespace std;
int main()
{



int minimum, a, b, c;
cin>>a>>b>>c;
minimum = a;
if(minimum > b)
{
    minimum = b;
}
if(minimum > c)
{
    minimum = c;
}

cout<<minimum;

return 0;
}
