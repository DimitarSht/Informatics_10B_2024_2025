#include<iostream>
using namespace std;
void changeString()
{
    string str;
    cin>>str;
    for(int i = 0; i < str.length(); i++)
    {
        str[i] = str[i] - 32;
    }
    cout<<str;
}
int main()
{
    changeString();
    return 0;
}
