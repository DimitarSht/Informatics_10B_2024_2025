#include<iostream>
using namespace std;
/// Сума на прости делители

bool isPrime(int num, int div)
{
    if(num <= 1) return false;
    if(div * div > num) return true;
    if(num % div == 0) return false;
    return isPrime(num, ++div);
}

int sumPrimeDiv(int num, int div, int sum)
{
    if(div == num) return sum;
    if(isPrime(div, 2) && num % div == 0)
    {
        sum += div;
    }
    return sumPrimeDiv(num, ++div, sum);
}

int main()
{
    cout<<sumPrimeDiv(12, 2, 0);
    return 0;
}
