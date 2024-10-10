#include<iostream>
using namespace std;
/*
Напишете програма, която намира най-дългата поредица
от 1-ци в даден бинарен стринг
(стринг, съставен само от 0-ли и 1-ци).
Пример:
1100110001
Изход:
11  2
*/
int main()
{
    string str;
    cin>>str;
    int counter = 0, maxCounter = 0;
    int length = str.length();
    for(int i = 0; i < length; i++)
    {
        if(str[i] == '1')
        {
            counter++;
        }
        else
        {
            counter = 0;
        }
        if(counter > maxCounter)
        {
            maxCounter = counter;
        }
    }


    return 0;
}
