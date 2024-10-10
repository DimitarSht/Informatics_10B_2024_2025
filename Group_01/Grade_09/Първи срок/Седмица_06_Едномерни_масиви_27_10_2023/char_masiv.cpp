#include<iostream>
using namespace std;
int main()
{
    int razmer;
    cin>>razmer;

    char masiv[razmer];
    for(int i = 0; i < razmer; i++)
    {
        cin>>masiv[i];
    }
    for(int i = 0; i < razmer; i++)
    {
        cout<<masiv[i]<<" ";
    }

return 0;
}
