#include<iostream>
using namespace std;

/* Зад. 1
Ще наричаме площадка непрекъсната последователност от елементи с равни стойности.
Да се състави програма на C++, която проверява коя е най-дългата площадка в
предварително въведен масив от естествени числа от интервала [0 - 5000].
Програмата да извежда най-дългата площадка в масива и броят на площадките.
Вход:
1 3 3 7 9 9 9 9 11 11 12 14
Изход:
Longest platform: 4 elements
Number of platforms: 3
*/

int main()
{

    int sz, min_idx;
    cin>>sz;
    int arr[sz];

    for(int i = 0; i < sz; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i < sz - 1; i++)
    {
        min_idx = i;
        for(int j = i; j < sz; j++)
        {
            if(arr[min_idx] > arr[j])
            {
                min_idx = j;
            }
        }
        if(arr[min_idx] != arr[i])
        {
            swap(arr[min_idx], arr[i]);
        }
    }

    int lengthPlatform = 0, MAXlength = 0, countPlatforms = 0;
    int currPlatformLength = 1;
    for(int i = 0; i < sz - 1; i++)
    {
        if(arr[i] == arr[i+1])
        {
            lengthPlatform++;
        }
        else
        {
            lengthPlatform = 1;
        }
        if(lengthPlatform > MAXlength)
        {
            MAXlength = lengthPlatform;
        }
    }

    for (int i = 0; i < sz - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            // елементът е част от площадка
            currPlatformLength++;
        }
        else
        {
            // площадката приключва
            if (currPlatformLength > 1 )
            {
                countPlatforms++;
                cout<<countPlatforms<<" ";
            }
            currPlatformLength = 1;
        }
    }
    cout<<endl;
    cout<<MAXlength<<" "<<countPlatforms<<endl;


    for(int i = 0; i < sz; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
