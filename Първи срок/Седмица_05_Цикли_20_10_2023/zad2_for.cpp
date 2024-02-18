/*
2.Да се състави програма, която изчислява сумата от цифрите на
всички естествени 2-цифрени числа до въведено от
клавиатурата на число.
Входни данни: n - естествено 2-цифрено
            число от интервала [10..99].
Пример: 21
Изход: 60
*/

#include<iostream>
using namespace std;
int main()
{
    int N, sum_cifri = 0;
    cin>>N;
    for(int i = 10; i <= N; i++)
    {
        sum_cifri = sum_cifri + i % 10 + i / 10;
    }
    cout<<sum_cifri;


    ///do-while
    int i = 10;
    cin>>N;
    do
    {

        sum_cifri = sum_cifri + i % 10 + i / 10;
        i++;
    }
    while(i <= N);
    cout<<sum_cifri;

return 0;
}
