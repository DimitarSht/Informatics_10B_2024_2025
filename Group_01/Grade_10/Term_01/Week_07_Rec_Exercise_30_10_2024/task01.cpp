#include<iostream>
using namespace std;
int rev(int num, int result)
{
    if(num == 0) return result;
    result = result * 10 + num % 10;
    return rev(num / 10, result);
}

int cntPalindrome(int a, int b, int cnt)
{
    if(a > b) return cnt;
    if(a == rev(a, 0)) ++cnt;
    return cntPalindrome(a + 1, b, cnt);
}

void sortArr(int arr[], int sz, int i)
{
    if(i == sz) return;
    for(int j = i; j < sz - i - 1; j++)
    {
        if(arr[j] > arr[j+1])
            swap(arr[j], arr[j+1]);
    }
    sortArr(arr, sz, ++i);
}





int main()
{
    cout<<cntPalindrome(10, 100, 0);
    return 0;
}
