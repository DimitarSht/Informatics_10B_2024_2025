#include<iostream>
using namespace std;
int main()
{
int number;
cin>>number;
int a = number%10, b = number/10%10, c = number/100%10;
if(number%a == 0 && number % b == 0 && number % c == 0)
{
    cout<<"deli se";
}
else{
    cout<<"ne se deli";
}
return 0;
}
