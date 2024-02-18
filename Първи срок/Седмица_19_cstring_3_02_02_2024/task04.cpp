#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char txt[100];
    //cin>>str; /// без интервали
    cin.getline(txt, 100);   /// с интервали

    /// 1. Празно копие на нашия масив
    /// 2. Обхождаме txt и броим символите
    /// до въведен интервал
    /// 3.

    cout<<strrev(txt);
    return 0;
}
