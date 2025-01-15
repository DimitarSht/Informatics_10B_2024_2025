#include<iostream>
using namespace std;
int main()
{
    int rows, cols;
    int sum = 0, counter = 0;
    double average = 0.0;
    cin>>rows>>cols;
    int grades[rows][cols];
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin>>grades[i][j];
        }
    }
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            sum += grades[i][j];
        }
        average = (double)sum / cols;
        if(average >= 5.50)
        {
            counter++;
        }
        sum = 0;
        cout<<average<<endl;
    }
    cout<<counter;

    return 0;
}
