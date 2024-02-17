#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    string str1 = "NEPEMEGE";
    ///cin>>str; /// въвеждаме само 1 дума
    getline(cin, str); /// въвеждаме с интервали

    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
    str1.swap(str);

    cout<<str.find('E')<<endl;



    cout<<"str: "<<str<<endl;
    str.erase(2, 1);
    cout<<"str: "<<str<<endl;
    cout<<"str1: "<<str1<<endl;

    return 0;
}
