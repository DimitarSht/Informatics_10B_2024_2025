#include<iostream>
using namespace std;
class Rational
{
public:
    Rational(int numerator, int denominator)
    {
        setNumerator(numerator);
        setDenominator(denominator);
    }

    int getNumerator()
    {
        return numerator;
    }

    int getDenominator()
    {
        return denominator;
    }

    void setNumerator(int n)
    {
        numerator = n;
    }

    void setDenominator(int n)
    {
        if(n != 0)
        {
            denominator = n;
        }
    }

    void square()
    {
        setNumerator(numerator*numerator);
        setDenominator(denominator*denominator);
    }

    void print()
    {
        cout<<numerator<<"/"<<denominator<<endl;
    }

/*
- `simplify` - опростява числото до несъкратима дроб;
- `plus` - по подадено рационално число, намира сумата на двете
числа и запазва резултата в текущото число;
- `multiply` - същото като `plus`, но за умножение;
- `compare` - по подадено рационално число, проверява дали
то е по-голяма, равно или по-малко от текущото.
Да връща съответно 1, 0 или -1.
*/

private:
    int numerator;
    int denominator;
};
int main()
{
    Rational r(2, 3);
    r.print();
    r.square();
    r.print();

        return 0;
}
