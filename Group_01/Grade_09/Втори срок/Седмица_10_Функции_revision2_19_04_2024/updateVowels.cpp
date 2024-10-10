#include<iostream>
using namespace std;
/*
Създайте функция, която приема дума и
увеличава всички гласни с дадено число.
*/

bool isVowel(char c)
{
    return c == 'a' || c == 'o'
        || c == 'u' || c == 'i' || c == 'e';
}

void updateVowel(string str, int number)
{
    for(int i = 0; i < str.length(); i++)
    {
        if(isVowel(str[i]))
        {
            for(int j = 0; j < number; j++)
            {
                cout<<str[i];
            }
        }
        else
        {
            cout<<str[i];
        }
    }
}

int main()
{
    string str;
    cin>>str;
    updateVowel(str, 3);
    return 0;
}
