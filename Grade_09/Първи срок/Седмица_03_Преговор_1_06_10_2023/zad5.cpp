#include<iostream>
using namespace std;
int main()
{
    int num, n1, n2, n3;
    cin>>num;
    n1 = num/100%10;
    n2 = num /10 % 10;
    n3 = num%10;
    cout<<n1<<" "<<n2<<" "<<n3<<endl;
    if(n1 != n2 && n2 != n3 && n1 != n3)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }


return 0;
}
