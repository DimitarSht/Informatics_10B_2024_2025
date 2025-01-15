#include<iostream>
#include<cstring>
using namespace std;
/*
2.	Напишете програма, която приема
една таблица от символи и я сортира
лексикографски по редове.
Вход:
python
jvscrp
htmltx

Изход:
hnopty

*/


int main()
{
    int rows, cols;
    cin>>rows>>cols;
    char table[rows][cols];
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin>>table[i][j];
        }
    }
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols - 1; j++)
        {
            for(int k = 0; k < cols - j - 1; k++)
            {
                if(table[i][k] > table[i][k+1])
                {
                    swap(table[i][k],table[i][k+1]);
                }
            }
        }
    }
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0; i < cols; i++)
    {
        if(strcmp(table[0][i],table[1][i]) > 0)
        {
            if(strcmp(table[1][i],table[2][i]) > 0)
            {
                cout<<table[0][i];
            }
            else if(strcmp(table[1][i],table[2][i]) < 0)
            {
                if(strcmp(table[0][i],table[2][i]) > 0)
                {
                    cout<<table[0][i];
                }
                else
                {
                    cout<<table[2][i];
                }
            }
        }
        else if(strcmp(table[0][i],table[1][i]) < 0)
        {
            if(strcmp(table[1][i],table[2][i]) > 0)
            {
                cout<<table[1][i];
            }
            else if(strcmp(table[1][i],table[2][i]) < 0)
            {
                cout<<table[2][i];
            }
            else
            {
                cout<<table[2][i];
            }

        }
        else if(strcmp(table[0][i],table[1][i]) == 0 && strcmp(table[0][i],table[2][i] > 0))
        {
            cout<<table[0][i];
        }
        else if(strcmp(table[0][i],table[1][i]) strcmp(table[0][i],table[1][i]))
    }



    return 0;
}
