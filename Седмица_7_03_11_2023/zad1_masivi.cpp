#include<iostream>
using namespace std;
int main()
{
    int razmer1, razmer2;
    cin>>razmer1>>razmer2;

    int masiv1[razmer1], masiv2[razmer2];
    for(int i = 0; i < razmer1; i++)
    {
        cin>>masiv1[i];
    }
    for(int i = 0; i < razmer2; i++)
    {
        cin>>masiv2[i];
    }

    for(int i = 0; i < razmer1; i++)
    {
        for(int j = 0; j < razmer2; j++)
        {
            if(masiv1[i] == masiv2[j])
            {
                cout<<masiv1[i]<<" ";
            }
        }
    }


    return 0;
}
