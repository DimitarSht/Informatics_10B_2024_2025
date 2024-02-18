#include<iostream>
using namespace std;
///  Obedinqvane

int main()
{
    int razmer1, razmer2, razmer_obedinen;
    cin>>razmer1>>razmer2;
    razmer_obedinen = razmer1 + razmer2;

    int masiv1[razmer1], masiv2[razmer2], masiv3[razmer_obedinen];
    for(int i = 0; i < razmer1; i++)
    {
        cin>>masiv1[i];
    }
    for(int i = 0; i < razmer2; i++)
    {
        cin>>masiv2[i];
    }

    for(int i = 0; i < razmer_obedinen; i++)
    {
        if(i < razmer1)
        {
            masiv3[i] = masiv1[i];
        }
        else
        {
            masiv3[i] = masiv2[i - razmer2];  /// ако са еднакви размерите
            /// masiv3[i] = masiv2[i - razmer1];  /// ако са различни размерите
        }
        //cout<<masiv3[i]<<" ";
    }
    int tmp;
    for(int i = 0; i < razmer_obedinen - 1; i++)
    {
        for(int j = 0; j < razmer_obedinen - i - 1; j++)
        {
            ///if(masiv3[j] < masiv3[j+1]) /// възходящ ред
            if(masiv3[j] > masiv3[j+1]) /// низходящ ред
            {
                tmp = masiv3[j];
                masiv3[j] = masiv3[j+1];
                masiv3[j+1] = tmp;
            }

        }
    }

    for(int i = 0; i < razmer_obedinen; i++)
    {
        cout<<masiv3[i]<<" ";
    }

    return 0;
}
