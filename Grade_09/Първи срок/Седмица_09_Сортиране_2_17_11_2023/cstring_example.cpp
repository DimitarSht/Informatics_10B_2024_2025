#include<iostream>
#include<cstring>
using namespace std;
int MAX_SIZE = 100;
int main()
{
    char duma[MAX_SIZE];
    for(int i = 0; duma[i] != '\0'; i++)
    {
        cin>>duma[i];
    }
    int i = 0;
    while(duma[i] != '\0')
    {
        ++i;
    }
    cout<<i;
    //cout<<strlen(duma);

return 0;
}
