#include<iostream>
using namespace std;
int main()
{
    bool zig_zag = 0;
    int razmer;
    cin>>razmer;
    int masiv[razmer];
    for(int i = 0; i < razmer; i++)
    {
        cin>>masiv[i];
    }

    for(int i = 0; i < razmer; i+=2)
    {
        if(masiv[i] < masiv[i + 1] &&
           masiv[i+1] > masiv[i+2])
        {
            zig_zag = 1;
        }
    }
    cout<<zig_zag;

return 0;
}
