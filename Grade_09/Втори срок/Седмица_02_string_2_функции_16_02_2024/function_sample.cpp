#include<iostream>
using namespace std;
/*
int sum(int x, int y)
{
    int suma = x + y;
    return suma;
}
*/
void sum(int x, int y)
{
    int suma = x + y;
    cout<<suma;
}

int main()
{
    int a, b;
    cin>>a>>b;
//    cout<<sum(a,b);
//    int sumaNaDve4isla = sum(a,b);
//    cout<<sumaNaDve4isla;
    sum(a,b);
    return 0;
}
