#include<iostream>
using namespace std;
/*
Задача 3: Да се дефинира функция
pow(double x, int n), където х – реално, n – цяло число
(може да е положително, отрицателно или 0).
Функцията да връща стойност x
n.
*/
double pow(double x, int n)
{
    double result = 1;
    if(n > 0)
    {
        for(int i = 0; i < n; i++)
        {
            result = result*x;
        }
        return result;
    }
    else if(n < 0)
    {
        for(int i = 0; i < (-1)*n; i++)
        {
            result = result*x;
        }
        result = 1/result;
        return result;
    }
    else
    {
        return 1;
    }

}
int main()
{
    cout<<pow(2,5)<<endl;
    cout<<pow(2,0)<<endl;
    cout<<pow(2,-3)<<endl;
    return 0;
}
