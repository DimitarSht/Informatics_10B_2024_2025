#include<iostream>
using namespace std;
void SwAp(int *p1, int *p2)
{
    int *tmp; /// nullptr
    tmp = p1;
    p1 = p2;
    p2 = tmp;

}

void Swap(int &p1, int &p2)
{
    int tmp; /// nullptr
    tmp = p1;
    p1 = p2;
    p2 = tmp;
}

int main()
{
    int a=3, b=5;
    cout<<a<<" "<<b<<endl;
    Swap(a, b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
