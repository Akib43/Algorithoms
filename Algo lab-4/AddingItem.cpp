#include<iostream>
using namespace std;

void Add(int arr[], int n, int item){
    int mid = (n / 2)-1;
    for(int i = n; i > mid; i--) arr[i] = arr[i - 1];
    arr[mid] = item;
}

void show(int arr[], int l){
    for(int i = 0; i < l; i++) cout << arr[i] << " ";
}

int main() {
    int n = 5;
    int arr[n++] = {1, 2, 3, 4, 5};
    int item = 10;
    cout << "Original array: \n";
    show(arr, n);
    Add(arr, n, item);
    cout << "\nArray after adding " << item << ": \n";
    show(arr, n);
    return 0;
}
