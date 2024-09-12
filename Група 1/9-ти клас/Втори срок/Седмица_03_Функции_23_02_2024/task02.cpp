#include<iostream>
using namespace std;
/*
Задача 2:
Да се дефинира функция NOD(int x,int y),
където х и у са естествени числа.
Функцията да връща като стойност
най-големия общ делител на двете числа.
*/
int NOD(int x, int y)
{
    if(x>y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    int maxDel = 1;
    for(int i = 1; i <= x; i++)
        {
            if(x%i==0&&y%i==0)
            {
                maxDel = i;
            }
        }
        return maxDel;
}
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<NOD(a,b);
    return 0;
}
