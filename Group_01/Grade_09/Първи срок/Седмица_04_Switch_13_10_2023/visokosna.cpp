#include<iostream>
using namespace std;
int main()
{
    int year, year1;
    cin>>year;
    year1 = year % 4;

    switch(year1)
    {
    case 0:
        cout<<"Visokosna";
        break;
    default:
        cout<<"Ne e visokosna";
        break;
    }


return 0;
}
