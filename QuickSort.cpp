#include<iostream>
using namespace std;

int Partition(int arr[],int low, int high){
    int pivot=arr[low];
    int leftwall=low;

    for(int i=low+1;i<=high;i++){
        if(arr[i]<pivot){
            int a=arr[i];
            arr[i]=arr[leftwall];
            arr[leftwall]=a;
            leftwall++;
        }
    }

    int a=arr[leftwall];
    arr[leftwall]=pivot;
    pivot=a;

    return leftwall;
}

void QuickSort(int arr[],int low,int high){
    if(low<high){
       int pivot_loc=Partition(arr,low,high);
       QuickSort(arr,low,pivot_loc);
       QuickSort(arr,pivot_loc+1,high);
    }
}

int show(int arr[],int low,int high){
    for(int i=low;i<high;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[8]={8,3,4,2,1,6,5,7};
    int low=0, high=sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,low,high);
    show(arr,low,high);
}