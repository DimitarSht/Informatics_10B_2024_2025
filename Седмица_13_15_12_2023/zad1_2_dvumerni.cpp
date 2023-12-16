#include<iostream>
using namespace std;
int main()
{
    int rows, cols, K, sumOnRowK = 0, sumOnColK = 0;
    cin>>rows>>cols>>K;
    int table[rows][cols];
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin>>table[i][j];
        }
    }
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(i == K)
            {
                sumOnRowK += table[i][j];
            }
            if(j == K)
            {
                sumOnColK += table[i][j];
            }
        }
    }

    cout<<sumOnRowK<<" "<<sumOnColK;

    return 0;
}
