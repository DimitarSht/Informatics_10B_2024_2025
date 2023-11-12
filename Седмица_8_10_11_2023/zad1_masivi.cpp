#include<iostream>
using namespace std;
///  Palindrom

int main()
{
    int razmer;
    cin>>razmer;
    bool isPalindrom = false;

    int counter = 0;
    char duma[razmer];
    for(int i = 0; i < razmer; i++)
    {
        cin>>duma[i];
    }

    /// Algoritam za palindromi
    for(int i = 0; i < razmer / 2; i++)
    {
        if(duma[i] == duma[razmer - i - 1])
        {
            counter++;
        }
    }
    if(counter == razmer / 2)
    {
        isPalindrom = 1;
    }

    if(isPalindrom)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }


    return 0;
}
