#include <iostream>
using namespace std;

int Partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[high]);
    return i;
}

void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = Partition(arr, low, high); 
        QuickSort(arr, low, pivotIndex - 1);
        QuickSort(arr, pivotIndex + 1, high);
    }
}

void PrintArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array: \n";
    PrintArray(arr, n);

    QuickSort(arr, 0, n - 1);

    cout << "Sorted array: \n";
    PrintArray(arr, n);
    return 0;
}
