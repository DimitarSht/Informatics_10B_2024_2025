#include<iostream>
using namespace std;
/*
Задача 5:
Напишете функция
int subArraySum
(int arr[],int n,int i,int k),
която да намира сумата на подмасива
с размер k от масива
arr, започвайки от i-тия елемент. Ако
подмасива излиза от размерите на arr,
функцията да връща -1.
Пример:
arr=3, 0, 6, 4, 9, 2
i=2, k=4
Изход: 19
*/
int subArraySum(int arr[], int sz, int i, int k)
{
    int sum = 0;
    if(i+k > sz)
    {
        return -1;
    }
    else
    {
        for(int j = i - 1; j <= k; j++)
        {
            sum += arr[j];
        }
        return sum;
    }
}

int main()
{
    int arr[] = {3, 0, 6, 4, 9, 2};
    cout<<subArraySum(arr, 6, 2, 4);

    return 0;
}
