#include<iostream>
using namespace std;

void bubbleSort(int arr[],int l){
    for(int i=0;i<l;i++){
        for(int j=0;j<l-i;j++){
            if(arr[j+1]<arr[j]) swap(arr[j],arr[j+1]);
        }
    }
}

void show(int arr[],int l){
    for(int i=0;i<l;i++) cout<<arr[i]<<" ";
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
    show(arr,l);
    bubbleSort(arr,l);
    cout << "\nSorted array: \n";
    show(arr,l);
    return 0;
}