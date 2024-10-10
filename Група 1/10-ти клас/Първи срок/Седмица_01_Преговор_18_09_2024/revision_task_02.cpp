#include<iostream>
using namespace std;
/*
Напишете програма подобна на задача 1. 
Нека този път числата бъдат обработени по следнияначин:
Четно -> x - 1
Нечетно -> х - 3
> 10 -> x % 10
<= 10 -> x * 10

Вход:
5 // n
11 // arr[0]
24
37 // ...
41
50 // arr[4]
Изход: 8, 3, 4, 8, 9*/ 

int main()
{
    int num;
    cin>>num;
    int arr[num];
    
    for(int i = 0; i < num; i++) cin>>arr[i];

    for(int i = 0; i < num; i++)
    {
        if(arr[i] % 2 == 0) arr[i] -= 1; // a = a - 1;
        else arr[i] -= 3;
        if(arr[i] > 10) arr[i] %= 10;
        else arr[i] *= 10;
    }

    for(int i = 0; i < num; i++) cout<<arr[i]<<" ";
    
    return 0;
}