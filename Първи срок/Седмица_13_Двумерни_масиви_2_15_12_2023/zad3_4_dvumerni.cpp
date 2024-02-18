#include<iostream>
using namespace std;
int main()
{
    int rows, cols;
    cin>>rows>>cols;
    int table[rows][cols];
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin>>table[i][j];
        }
    }
    for(int i = 0; i < rows; i = i + 2)
    {
        for(int j = 0; j < cols; j++)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0; i < rows; i++)
    {
        for(int j = 1; j < cols; j = j + 2)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
