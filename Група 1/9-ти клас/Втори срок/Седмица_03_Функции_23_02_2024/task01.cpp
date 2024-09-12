#include<iostream>
using namespace std;
/*
Задача 1: Да се напише програма за намиране
сумата на три числа. Да се дефинира функция
suma(double x, double y, double z)
*/
double suma(double x, double y, double z)
{
    double sum = x + y + z;
    return sum;
//  return x + y + z;
}

void sumaVoid(double x, double y, double z)
{
    cout<<x + y + z;
}

int main()
{
    cout<<suma(1,2,3)<<endl; /// връща стойност
    sumaVoid(1,2,3); /// не връща стойност

    return 0;
}

