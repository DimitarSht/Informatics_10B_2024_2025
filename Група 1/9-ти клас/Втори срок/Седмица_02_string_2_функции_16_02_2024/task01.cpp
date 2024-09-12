#include<iostream>
using namespace std;
/*
1.	Напишете програма, която проверява
дали даден стринг е подстринг на друг стринг.
Програмата да върне 1 за вярно и 0 за грешно.
Пример:
Word: apple
Subword: apl
Изход: 0
*/


int main()

{
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
    int fstElement = str1.find(str2);
    if(fstElement != -1)
    {
        cout<<1;
    }
    else
    {
        cout<<0;
    }
    return 0;
}
