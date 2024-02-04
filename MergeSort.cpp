#include<iostream>
using namespace std;

void Merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* leftArr = new int[n1];
    int* rightArr = new int[n2];

    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j];

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        }
        else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }

    delete[] leftArr;
    delete[] rightArr;
}

void MergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);

        Merge(arr, left, mid, right);
    }
}

void show(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[8] = {8, 3, 4, 2, 1, 6, 7, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    show(arr, size);

    MergeSort(arr, 0, size - 1);

    cout << "Sorted Array: ";
    show(arr, size);

    return 0;
}