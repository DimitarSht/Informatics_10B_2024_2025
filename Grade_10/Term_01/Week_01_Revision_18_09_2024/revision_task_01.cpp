#include<iostream>
using namespace std;
/*
Напишете програма, която приема n на
брой цели числа от конзолата и ги извежда
в обратен ред на въвеждане.
Вход:
5 // n
1 // arr[0]
2 // arr[1]
3 // arr[2]
4 // arr[3]
5 // arr[4]
Изход: 5, 4, 3, 2, 1
*/
int main()
{
    int num;
    cin>>num;
    int arr[num];

    for(int i = 0; i < num; i++)   //for( ; num != 0 ; )// <=> while(num != 0)
        cin>>arr[i];

    for(int i = num - 1; i >= 0; i--) 
        cout<<arr[i]<<" ";
    
    return 0;
}
    
    
