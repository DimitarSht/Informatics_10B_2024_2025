#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {

    // Избираме пивот
    int pivot = arr[high];

    // Индекс на елемент точно преди последния елемент
    // Използваме го за размяната
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {

        // Ако текущият елемент е по-малък или равен на пивота
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // Слагаме пивота на мястото, на което трябва да се намира в сортирания масив
    swap(arr[i + 1], arr[high]);

    // Връщаме индекса, на който сме направили разделянето на две части
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {

    // Базов случай: Ще се изпълнява докато лявата граница е по-малка от дясната граница
    if (low < high) {

        // pi е позицията, спрямо която разделяме масива на две части
        int pi = partition(arr, low, high);

        // Сортираме по-отделно лявата, после дясната част на масива
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[]= {10, 7, 8, 9, 1, 5};
    int n = 6;
    
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i]<< " ";
    }
    return 0;
}