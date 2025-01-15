#include<iostream>
using namespace std;
int main()
{
    int sum = 0, number = 0, position = 1;
    //cin>>number;
    int maximum = number, maxposition = 1;
    while(sum < 10000)
    {
        cin>>number;
        sum = sum + number;
        if(number > maximum)
        {
            maximum = number;
            maxposition = position;
        }
        position++;
    }
    cout<<maximum<<" "<<maxposition;

return 0;
}
