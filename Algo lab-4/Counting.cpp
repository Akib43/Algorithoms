#include<iostream>
using namespace std;

int large(int arr[], int l) {
    int large = 0;
    for(int i = 0; i < l; i++) {
        if(large < arr[i]) large = arr[i];
    }
    return large;
}

void countingSort(int arr[], int l) {
    int h = large(arr, l);
    int arr1[h + 1];
    int arr2[l];
    for(int i = 0; i <= h; i++) {
        arr1[i] = 0;
    }
    for(int i = 0; i < l; i++) {
        arr1[arr[i]]++;
    }
    for(int i = 1; i <= h; i++) {
        arr1[i] += arr1[i - 1];
    }
    for(int i = l - 1; i >= 0; i--) {
        arr1[arr[i]]--;
        arr2[arr1[arr[i]]] = arr[i];
    }
    for(int i = 0; i < l; i++) {
        arr[i] = arr2[i];
    }
}

void show(int arr[], int l) {
    for(int i = 0; i < l; i++) cout << arr[i] << " ";
}

int main() {
    int l;
    cout<<"Number of input : ";
    cin>>l;
    int arr[l];
    cout<<"Input array :";
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }
    cout << "Given array: \n";
    show(arr, l);
    countingSort(arr, l);
    cout << "\nSorted array: \n";
    show(arr, l);
    return 0;
}
