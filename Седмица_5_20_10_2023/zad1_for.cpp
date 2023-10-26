/*
1.Да се състави програма, която ще изчисли сумата на 5,
въведени от клавиатурата,
естествени числа от интервала [10 ..5555].
Пример: 1,2,3,4,5
Изход: 15
*/

#include<iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    for(int i = 0; i < 5; i++)
    {
        cin>>num;
        sum+=num;
        ///sum = sum * num <=> sum*=num
        ///sum = sum / num <=> sum/=num
        ///i = i + 2 <=> i+=2
    }
    cout<<sum;

    ///do-while
    /*int i = 0;
    do
    {
        cin>>num;
        sum+=num;
        i++;
    }
    while(i < 5);
    cout<<sum;*/

return 0;
}
