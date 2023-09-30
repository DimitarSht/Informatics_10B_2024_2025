#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int distance1 = a - b;
    int distance2 = a - c;
    if(distance1 < 0)
    {
        distance1 = distance1 * (-1);
    }
    if(distance2 < 0)
    {
        distance2 = distance2 * (-1);
    }
    if(distance1 > distance2)
    {
       cout<<"C "<<distance2<<endl;
    }
    else if (distance1 < distance2)
    {
        cout<<"B "<<distance1<<endl;
    }
    else
    {
        cout<<"ravni sa";
    }


return 0;
}
