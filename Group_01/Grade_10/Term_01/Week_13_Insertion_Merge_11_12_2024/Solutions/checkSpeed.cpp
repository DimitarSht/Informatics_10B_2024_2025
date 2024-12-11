/// Програма, с която проверяваме скоростта на всеки един от изучените алгоритми за сортиране



#include <iostream>
#include <random>
using namespace std;
void insertionSort(int arr[], int sz)
{
    for(int i = 1; i < sz;i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
void output(int arr[], int sz)
{
    for(int i = 0; i < sz; i++)
        cout<<arr[i]<<" ";
}

void bubble(int arr[], int sz)
{
    for(int i = 0; i < sz - 1; i++)
    {
        for(int j = 0; j < sz - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}

void selection(int arr[], int sz)
{
    int min_idx;
    for(int i = 0; i < sz - 1; i++)
    {
        min_idx = i;
        for(int j = i + 1; j < sz; j++)
        {
            if(arr[j] < arr[min_idx])
                min_idx = j;
        }
        if(i!=min_idx)
            swap(arr[i], arr[min_idx]);
    }
}
void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int leftArr[n1], rightArr[n2];
    for (int i = 0; i < n1; ++i)
    {
        leftArr[i] = arr[left + i];
    }
    for (int j = 0; j < n2; ++j)
    {
        rightArr[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (leftArr[i] <= rightArr[j])
        {
            arr[k++] = leftArr[i++];
        }
        else
        {
            arr[k++] = rightArr[j++];
        }
    }

    while (i < n1)
    {
        arr[k++] = leftArr[i++];
    }

    while (j < n2)
    {
        arr[k++] = rightArr[j++];
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() 
{

    int sz = 100000;
    int arr[sz];

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 99);

    for (int i = 0; i < sz; ++i) {
        arr[i] = dis(gen);
    }

    /// Bubble bubble(arr, sz);
    /// Selection selection(arr, sz);
    /// Insertion insertionSort(arr, sz);
    /// Merge 
    mergeSort(arr, 0, sz - 1);
    
    return 0;
}
