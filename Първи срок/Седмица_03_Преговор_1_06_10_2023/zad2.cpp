#include<iostream>
using namespace std;
int main()
{
    int A, B, C, tmp;
    cin>>A>>B>>C;

    if(B > C)
    {
        tmp = C;
        C = B;
        B = tmp;
    }
    if(B <= A && A <= C)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }



return 0;
}
