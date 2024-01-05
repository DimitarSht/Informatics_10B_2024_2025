#include<iostream>
using namespace std;
/*
Зад. 1
ДСП, която въвежда естествените числа M , N и К
и попълва масив от М реда и N стълба. Програмата да
намира и извежда:
а) броя на елементите от всеки ред,
които са по-големи от средно
аритметичното за съответния ред.
б) броя на елементите от всеки от първите К реда,
които са равни на средно
аритметичното за дадения ред.
в) броя на елементите от всеки от последните К реда,
които са по-малки от средно
аритметичното за дадения ред.
г) броя на елементите от всеки от последните К
колонки, които са равни на средно
аритметичното за дадената колонка.
*/

int main()
{
    int rows, cols, K;
    cin>>rows>>cols>>K;
    int table[rows][cols];
    for(int i = 0 ; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin>>table[i][j];
        }
    }

    /// a)
    int counterRows = 0;
    double sum = 0.0, average;
    for(int i = 0 ; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            sum += table[i][j];
        }
        average = sum / cols;
        for(int j = 0; j < cols; j++)
        {
            if(table[i][j] > average)
            {
                counterRows++;
            }
        }
        cout<<counterRows<<endl;
        counterRows = 0;
        sum = 0.0;
    }

    /// b)
    for(int i = 0 ; i < K; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            sum += table[i][j];
        }
        average = sum / cols;
        for(int j = 0; j < cols; j++)
        {
            if(table[i][j] == average)
            {
                counterRows++;
            }
        }
        cout<<counterRows<<endl;
        counterRows = 0;
        sum = 0.0;
    }

    ///c)
    int counterRows = 0;
    double sum = 0.0, average;
    for(int i = rows - K ; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            sum += table[i][j];
        }
        average = sum / cols;
        for(int j = 0; j < cols; j++)
        {
            if(table[i][j] < average)
            {
                counterRows++;
            }
        }
        cout<<counterRows<<endl;
        counterRows = 0;
        sum = 0.0;
    }

    ///d)
    int counterRows = 0;
    double sum = 0.0, average;
    for(int i = 0 ; i < rows; i++)
    {
        for(int j = cols - K; j < cols; j++)
        {
            sum += table[i][j];
        }
        average = sum / cols;
        for(int j = cols - K; j < cols; j++)
        {
            if(table[i][j] == average)
            {
                counterRows++;
            }
        }
        cout<<counterRows<<endl;
        counterRows = 0;
        sum = 0.0;
    }

    return 0;
}
