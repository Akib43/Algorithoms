#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            cout<<"i = "<<i<<" j = "<<j;
            if(arr[j]<arr[i]){ 
            cout<<" Swap Between "<<arr[i]<<" And "<<arr[j];
            swap(arr[i],arr[j]);
            }else cout<<" Not swapable between "<<arr[i]<<" And "<<arr[j];
            cout<<endl;
        }
    }
}

void show(int arr[], int l) {
    for(int i = 0; i < l; i++) cout << arr[i] << " ";
}

int main(){
    int  arr[] = {4,23,67,89,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Array before sorting: \n";
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << "\n\n";

    selectionSort(arr,n);
    cout << "\nArray after sorting: \n";
    show(arr,n);
}