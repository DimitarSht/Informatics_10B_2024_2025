#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    char operand;
    cout<<"Enter first number:"<<endl;
    cin>>num1;
    cout<<"Enter operation:"<<endl;
    cin>>operand;
    cout<<"Enter second number:"<<endl;
    cin>>num2;

    switch(operand)
    {
    case '+':
        cout<<num1+num2<<" ";
        break;
    case '-':
        cout<<num1-num2<<" ";
        break;
    case '*':
        cout<<num1*num2<<" ";
        break;
    case '/':
        cout<<num1/num2<<" ";
        break;
    case '%':
        cout<<num1%num2<<" ";
        break;
    default:
        cout<<"Greshen operator";
        break;
    }



return 0;
}
