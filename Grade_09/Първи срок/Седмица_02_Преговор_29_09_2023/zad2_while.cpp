#include<iostream>
using namespace std;
int main()
{
    int number, a, counter = 0, sum = 0, product = 1;
    cin>>number;
    if(100 < number && number < 100000)
    {
       while(number != 0)
       {
            a = number % 10;
            number = number / 10;
            sum += a;
            product *= a;
            counter++;
       }

    }
    int average = sum / counter;
    cout<<counter<<" "<<sum<<" "<<product<<" "<<average;

return 0;
}
