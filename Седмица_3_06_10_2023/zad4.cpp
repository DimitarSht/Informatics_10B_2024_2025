#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a<b && b<c)
    {
        a = a*2;
        b = b*2;
        c = c*2;
    }
    else
    {
        a = a *-1;
        b = b*  -1;
        c = c*  -1;
    }
    cout<<a<<" "<<b<<" "<<c;

    return 0;

}
