#include<iostream>
using namespace std;

/*
5. Да се напише програма, която въвежда квадратна целочислена матрица Аnxn (n ≤ 20), намира  и извежда:
a) сбора на елементите по главния диагонал;
b) произведението на елементите по вторичния диагонал;
c) отрицателните елементи над главния диагонал;
d) всички елементи под вторичния диагонал.
*/

int main()
{
    int n, sumOnMainDiag = 0, prodOnSecDiag = 1;
    cin>>n;
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
            if(i == j)
            {
                sumOnMainDiag += table[i][j];
            }
            if(i + j == n - 1)
            {
                prodOnSecDiag *= table[i][j];
            }
            if(i < j && table[i][j] < 0)
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
    cout<<sumOnMainDiag<<" "<<prodOnSecDiag;

    return 0;
}
