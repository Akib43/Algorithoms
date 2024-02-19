#include<iostream>
using namespace std;

void insertionSort(int a[],int l){
    for(int i=1;i<l;i++){
        for(int j=i-1;j>=0;j--){
            if(a[j+1]<a[j]) swap(a[j+1],a[j]);
        } 
    }
}

void info(int a[],int l){
    for(int i=0;i<l;i++) cout<<a[i]<<" ";
}

int main(){
    int l;
    cout<<"Number of input : ";
    cin>>l;
    int arr[l];
    cout<<"Input array :";
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }
    insertionSort(arr,l);
    info(arr,l);
}