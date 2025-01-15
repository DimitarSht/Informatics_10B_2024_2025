#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cout<<"Enter size for first array: ";
    cin>>n;
    int sizeOfNewArray = n;
    cout<<"Enter size for second array: ";
    cin>>m;

    int L1[n], L2[m];
    for(int i = 0; i < n; i++)
    {
        cin>>L1[i];
        sizeOfNewArray = sizeOfNewArray + L1[i];
    }

    for(int i = 0; i < m; i++)
    {
        cin>>L2[i];
    }

    //cout<<sizeOfNewArray;
    int newArray[sizeOfNewArray];
    int j = 0;
    for(int i = 0; i < sizeOfNewArray; i++)
    {
        newArray[j] = L1[i];
        for( j != L1[i])
        {
            j++;
            newArray[j] = L2[i];
        }
    }
    for(int i = 0; i < sizeOfNewArray; i++)
    {
        cout<<newArray[i]<<" ";
    }

return 0;
}
