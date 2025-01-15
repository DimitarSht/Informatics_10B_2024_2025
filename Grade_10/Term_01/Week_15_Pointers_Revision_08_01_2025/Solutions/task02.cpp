#include<iostream>
using namespace std;
bool equal(int* firstBegin, int* firstEnd, int* secondBegin, int* secondEnd)
{
    for(int *i = firstBegin, *j = secondBegin;
        i <= firstEnd || j <= secondEnd;
        i++, j++)
    {
        if(*i != *j)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {1, 2, 1, 3};
    int arr2[] = {1, 2};
    int *begin = &arr[0];
    int *end = &arr[3];

    int *begin2 = &arr2[0];
    int *end2 = &arr2[1];

    cout << equal(begin, begin + 2, begin2, end2) << '\n'; //-> true
    cout << equal(begin, end, begin2, end2);

    return 0;
}
