#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    string belowTwenty[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                                "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen",
                                "Seventeen", "Eighteen", "Nineteen"};
    string belowHundred[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty",
    "Seventy", "Eighty", "Ninety"};

    int num;
    cin>>num;
    if(num < 10)
    {
        cout<<belowTwenty[num];
    }

    return 0;
}
