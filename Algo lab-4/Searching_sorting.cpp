#include<iostream>
using namespace std;

int linearSearch(int arr[],int l,int item){

    for(int i=0;i<l;i++){
        if(arr[i]==item) return i;
    }
    return -1;
}
/*------------------------------------------------------------------------------------*/

void bubbleSort(int arr[],int l){
    for(int i=0;i<l;i++){
        for(int j=0;j<l-i;j++){
            if(arr[j+1]<arr[j]) swap(arr[j],arr[j+1]);
        }
    }
}

/*-----------------------------------------------------------------------------------*/

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

/*----------------------------------------------------------------*/

int binarySearch(int arr[],int l,int item){
    int first=0,last=l-1;

    while(first<=last){
        int mid=(first+last)/2;
        if(arr[mid]>item) last=mid-1;
        else if(arr[mid]<item) first=mid+1;
        else if(arr[mid]==item) return mid;
    }
    return -1;
}

void show(int arr[],int high){
    for(int i=0;i<high;i++) 
        cout<<arr[i]<<" ";
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
    int item;
    cout<<"Find Value : ";
    cin>>item;
    int q;
    cout<<"1. linear search. \n";
    cout<<"2. Binary search. \n";
    cout<<"Enter the type of search you want to perform (1/2): ";
    cin>>q;

    cout<<"(-1 means not found) \n";
    if(q==1){
    cout<<"(linear) in index = "<<linearSearch(arr,l,item)<<endl;}
    else if(q==2){
    int v;
    cout<<"By which sort "<<endl;
    cout<<"1. Counting Sort "<<endl;
    cout<<"2. MergeSort "<<endl;
    cout<<"press any key to exit"<<endl;
    cin>>v;
    if(v==1){
        countingSort(arr,l);
        cout<<"Sorted Array is: ";
        show(arr,l);
        cout<<"\nFound in index :"<<binarySearch(arr,l,item);
    }else if(v==2){
        bubbleSort(arr,l);
        cout<<"Sorted Array is: ";
        show(arr,l);
        cout<<"\nFound in index :"<<binarySearch(arr,l,item);
        
    }
    }
}


