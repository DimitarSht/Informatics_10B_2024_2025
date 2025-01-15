#include<iostream>
using namespace std;
int linearSearch(string arr, int sz, char target)
{
    /// 1. Обхождаме целия масив
    /// 2. Проверяваме всеки елемент дали е равен на target
    /// 3. Ако имаме съответствие, то връщаме на индекса на елемента
    /// 4. Ако не, продължаваме нататък.
    /// 5. Ако не намерим такъв елемент, то връщаме -1

    for(int i = 0; i < sz; i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}


int LS(int arr[], int sz, int target)
{
    if(arr[sz - 1] == target)   return sz - 1;
    if(sz < 0) return -1;
    return LS(arr, --sz, target);
}

int main()
{

    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array: \n";
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    cout<<"We are searching: ";
    int searched;
    cin>>searched;
    int idx = LS(arr, n, searched);
    cout<<"The index of the searched number is: "<<idx<<endl;

    return 0;
}
