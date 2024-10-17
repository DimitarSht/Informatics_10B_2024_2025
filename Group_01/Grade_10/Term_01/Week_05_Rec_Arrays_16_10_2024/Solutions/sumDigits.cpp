#include<iostream>
using namespace std;
/// Сума на цифри на число
int sumDigits(int num)
{
    if(num < 10) return num;
    return num % 10 + sumDigits(num/=10);
}

void sumDig(int num, int result)
{
    if(num == 0)
    {
        cout<<result;
        return;
    }

    sumDig(num /= 10, result += num % 10);
}

int main()
{
    cout<<sumDigits(123);
    return 0;
}
