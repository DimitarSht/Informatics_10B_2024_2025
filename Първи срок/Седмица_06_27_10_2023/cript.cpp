#include<iostream>
using namespace std;
int main()
{
    int razmer;
    cout<<"Vavedi razmer na masiva:";
    cin>>razmer;
    char obiknovenText[razmer];
    char kriptiranText[razmer];

    cout<<"Vavedi obiknoven text:"<<endl;
    for(int i = 0; i < razmer; i++)
    {
        cin>>obiknovenText[i];
    }

    cout<<"Vavedi klyuch:";
    int k;
    cin>>k;

    /// kriptirane
    int tmp;
    for(int i = 0; i < razmer; i++)
    {
        tmp = (obiknovenText[i] + k) % 26;
        kriptiranText[i] = tmp + 65;
        cout<<kriptiranText[i];
    }

    return 0;
}
