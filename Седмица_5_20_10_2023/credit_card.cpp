#include<iostream>
using namespace std;
int main()
{
    long long number;
    cin>>number;
    int counter = 0, first_digit, first_two_digits, second_digit;
    while(number != 0)
    {
        counter++;
        first_digit = number % 10;
        first_two_digits = number % 100;
        if(counter == 15)
        {
            first_two_digits = number % 100;
        }
        number/=10;

    }

    ///VISA
    if((counter == 13 || counter == 16) && first_digit == 4)
    {
        cout<<"VISA";
    }
    ///AMEX
    ///374245455400126
    else if(counter == 15 &&
            first_digit == 3 &&
            (second_digit == 4 ||
            second_digit == 7))
            //first_two_digits == 34 ||
            //first_two_digits == 37)
    {
        cout<<"AMEX";
    }
    ///MASTERCARD
    else if(counter == 16
            && (50 < first_two_digits &&
                first_two_digits < 56))
                {
                    cout<<"MASTERCARD";
                }
    else
    {
        cout<<"INVALID";
    }

    return 0;
}
