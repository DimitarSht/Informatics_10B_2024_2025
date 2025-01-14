#include<iostream>
using namespace std;
void print( int* Begin,  int* End)
{
    for(int *i = Begin; i <= End; i++)
    {
        cout<<*i<<" ";
    }
}

int* upperBound(int* begin, int* end, int element)
{
    for(int *i = begin; i <= end; i++)
    {
        if(*i > element)
        {
            return i;
        }
    }
    return nullptr;
}

int main()
{
     int arr[] = {0, 1, 2, 5, 7};
    int *Begin = &arr[0];
    int *End = &arr[4];
    int *element = upperBound(Begin, End, 4);
    int *notFound = upperBound(Begin, End + 2, 4);


    print(element, End); //-> 5 7
    if(!notFound)
    {
        cout << "Not␣Found\n"; //-> Not Found
    }


}
