/*
Да се състави програма, чрез която предварително се
въвеждат N броя цели числа в едномерен масив
и се изчислява сумата на всички положителни числа от масива,
до срещане на първото отрицателно число.
Програмата да извежда всички положителни числа,
формиращи тази сума.
Пример:
N=10
14, 43, 47,-17, 21, 32,-43, -121, -92,143
Изход: 14, 43, 47, сума 104
*/
#include<iostream>
using namespace std;
int main()
{
    int razmer;
    cin>>razmer;
    int masiv[razmer];
    for(int i = 0; i < razmer; i++)
    {
        cin>>masiv[i];
    }

    int sum = 0;
    for(int i = 0; i < razmer; i++)
    {
        if(masiv[i] > 0)
        {
            sum += masiv[i];
            cout<<masiv[i]<<" ";
        }
        else
        {
            break;
        }
    }
    cout<<endl<<sum;

    return 0;
}
