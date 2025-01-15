#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int razmerRazliki = n - 1;
    int razlika[razmerRazliki];
    for(int i = 0; i < n - 1; i++)
    {
        razlika[i] = arr[i] - arr[i+1];
        cout<<razlika[i]<<" ";
    }

    /// Bubble sort
    /*for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }*/

    /// Selection sort
    int min_idx;
    for(int i = 0; i < razmerRazliki - 1; i++)
    {
        min_idx = i;
        for(int j = i + 1; j < razmerRazliki; j++)
        {
            if(razlika[j] < razlika[min_idx])
            {
                min_idx = j;
            }
        }
        if(min_idx != i)
        {
            swap(razlika[i], razlika[min_idx]);
        }
    }
    cout<<endl;
    for(int i = 0; i < razmerRazliki; i++)
    {
        cout<<razlika[i]<<" ";
    }
return 0;
}
