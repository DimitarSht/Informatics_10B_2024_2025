#include<iostream>
using namespace std;
int main()
{
    int n = 3;
    int table[n][n];
    int sum = 0, prod = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                sum += table[i][j];
                prod *= table[i][j];
            }
            //sum += table[i][j];
            //prod *= table[i][j];
        }
    }


    return 0;
}
