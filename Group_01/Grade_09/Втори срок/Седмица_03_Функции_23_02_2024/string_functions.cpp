#include<iostream>
using namespace std;
void changeString(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        str[i] = str[i] - 32;
    }
    cout<<str;
}
string changeStr(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        str[i] = str[i] - 32;
    }
    return str;
}

int main()
{
    string s = "abcd";
    changeString(s);
//    cout<<s;
    return 0;
}
