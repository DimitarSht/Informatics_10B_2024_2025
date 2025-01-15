#include<iostream>
using namespace std;
int main()
{
    int A, B;
    cin>>A>>B;

    if(A > B)
    {
        B = A;
    }
    else if(A < B)
    {
        A = B;
    }
    else
    {
        A = 0;
        B = 0;
    }

    cout<<A<<" "<<B;

return 0;
}
