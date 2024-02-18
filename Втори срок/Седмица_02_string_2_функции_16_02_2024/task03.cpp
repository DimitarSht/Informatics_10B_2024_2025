#include<iostream>
#include <string>
using namespace std;
/*
3.	Напишете програма, която принтира дадено число,
като слага запетайки на всяка хилядна.
Пример:
5000
Изход:
5,000
*/
int main()
{
    string number;
    cout << "Enter a number: ";
    cin >> number;
    int length = number.length();
    if(length <= 3)
    {
        cout<<number;
    }

    string result;
    int commaPos = 0;
    for(int i = 0; i < length ; i++ )
    {
        if(length % 3 == 0)
        {
            result += number[i];
            commaPos++;
        }
        if(commaPos == 3 && i != length - 1)
        {
            result += ',';
            commaPos = 0;
        }
    }
    cout<<result;

    return 0;
}

