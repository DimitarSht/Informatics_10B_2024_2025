#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char txt[150];
    cin>>txt;
    for(int i = 0; txt[i] != '\0' ; i++)
    {
        cout<<txt[i];
        if(txt[i+1] < 91 && txt[i+1]>44)
        {
            cout<<" ";
        }
    }



    return 0;
}

