#include<iostream>
using namespace std;
int main()
{
    int month;
    cin>>month;
    int proverka = month % 2;
    if(month < 8 && month !=2)
    {
        switch(proverka)
        {
        case 0:
            cout<<"30 dni v meseca";
            break;
        case 1:
            cout<<"31 dni v meseca";
            break;
        }
    }
    else if(month == 2) cout<<"28 dni v meseca";
    else
    {
        switch(proverka)
        {
        case 0:
            cout<<"31 dni v meseca";
            break;
        case 1:
            cout<<"30 dni v meseca";
            break;
        }
    }


    return 0;
}
