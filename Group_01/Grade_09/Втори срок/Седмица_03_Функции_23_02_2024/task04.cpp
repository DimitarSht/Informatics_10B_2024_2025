#include<iostream>
using namespace std;
/*
Задача 4: Да се дефинира функция за
намиране и извеждане на простите числа
в интервала [A, B] (1 < A, B ≤ 1000).
*/
void primeNumbers(int A, int B)
{
    int counter = 0;
    for(int i = A; i <= B; i++)
    {
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                counter++;
            }
        }
        if(counter == 0 && i != 1)
        {
            cout<<i<<" ";
        }
        counter = 0;
    }
}

int main()
{
    primeNumbers(1, 100);
    return 0;
}
