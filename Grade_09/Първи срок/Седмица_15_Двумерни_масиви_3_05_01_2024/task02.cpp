#include<iostream>
using namespace std;
int main()
{
    int N, sum = 0;
    cin>>N;
    int table[N][N];
    for(int i = 0 ; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin>>table[i][j];
        }
    }

    for(int i = 0 ; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i + j < N - 1)
            {
                sum += table[i][j];
            }
        }
    }

    cout<<sum;



    return 0;
}
