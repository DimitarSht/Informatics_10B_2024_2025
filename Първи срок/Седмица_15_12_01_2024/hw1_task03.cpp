#include<iostream>
using namespace std;
/*
Задача 3
Напишете програма, която въвежда правоъгълна таблица
Amxn (m, n ≤ 1000). След това програмата сортира
таблицата и извежда под формата на едномерен масив:
a)	Минимумите на всички редове
b)	Максимумите на всички колони
Вход:									Изход:
3, 4 // размерите на таблицата			а) 1 2 3
1 3 2 4									б) 5 4 5 6
3 2 5 4
5 4 3 6
*/

int main()
{
    int rows, cols, minRow = 100, maxCol = 0;
    cin>>rows>>cols;
    int table[rows][cols];
    for(int i = 0 ; i < rows; i++)
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
            if(table[i][j] < minRow)
            {
                minRow = table[i][j];
            }
        }
        cout<<minRow<<" ";
        minRow = 100;
    }
    cout<<endl;
    for(int i = 0; i < cols; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            if(table[j][i] > maxCol)
            {
                maxCol = table[j][i];
            }
        }
        cout<<maxCol<<" ";
        maxCol = 0;
    }




    return 0;
}
