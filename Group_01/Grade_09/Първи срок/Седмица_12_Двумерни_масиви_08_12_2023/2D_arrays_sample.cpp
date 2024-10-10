#include<iostream>
using namespace std;
int main()
{
    int n = 4;
    int table[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>table[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            /*
            if(i == j)
            {
                cout<<table[i][j]<<" ";
            }
            if(i + j == n - 1)
            {
                cout<<table[i][j]<<" ";
            }
            */
            if(i < j)
            {
                cout<<table[i][j]<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }


    return 0;
}
