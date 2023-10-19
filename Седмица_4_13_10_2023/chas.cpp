#include<iostream>
using namespace std;
int main()
{
    int chas;
    cin>>chas;
    int proverka = chas / 12;

    switch(proverka)
    {
    case 0:
        cout<<"AM";
        break;
    case 1:
        cout<<"PM";
        break;
    }




return 0;
}
