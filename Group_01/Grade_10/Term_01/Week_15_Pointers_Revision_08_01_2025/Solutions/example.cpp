#include <iostream>
using namespace std;
void print( int* Begin,  int* End)
{
    for(int *i = Begin; i <= End; i++)
    {
        cout<<*i<<" ";
    }
}

int main()
{
     // Декларираме масива
    int value[3] = { 5, 10, 20 };

    int* bgn = &value[0];
    int* End = &value[2];
    print(bgn, End);

    return 0;
}
