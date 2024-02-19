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
    cout<<"Counting sort array initializing : ";
    for(int i = 0; i < h; i++) cout << arr1[i] << " ";
    cout << endl;
    for(int i = 0; i < l; i++) {
        arr1[arr[i]]++;
    }
    cout<<"Values counter : ";
    for(int i = 0; i < h; i++) cout << arr1[i] << " ";
    cout <<endl;
    for(int i = 1; i <= h; i++) {
        arr1[i] += arr1[i - 1];
    }
    cout<<"Adding the counted value : ";
    for(int i = 0; i < h; i++) cout << arr1[i] << " ";
    cout <<endl;
    for(int i = l - 1; i >= 0; i--) {
        arr1[arr[i]]--;
        arr2[arr1[arr[i]]] = arr[i];
    }
    cout<<"Sorted array : ";
    for(int i = 0; i < l; i++) cout << arr2[i] << " ";
    cout <<endl;
    for(int i = 0; i < l; i++) {
        arr[i] = arr2[i];
    }
    cout<<"Coping the sorted values in main array : ";
    for(int i = 0; i < l; i++) cout << arr[i] << " ";
    cout <<endl;
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
    countingSort(arr, l);
    return 0;
}
