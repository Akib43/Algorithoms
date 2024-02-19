#include<iostream>
using namespace std;

int linearSearch(int arr[],int l,int item){

    for(int i=0;i<l;i++){
        if(arr[i]==item) return i;
    }
    return -1;
}

void insertionSort(int a[],int l){
    for(int i=1;i<l;i++){
        for(int j=i-1;j>=0;j--){
            if(a[j+1]<a[j]) swap(a[j+1],a[j]);
        } 
    }
}

/*-----------------------------------------------------------------------------------*/

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

/*------------------------------------------------------------------------------------------------*/

void Merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; ++i)
        L[i] = arr[low + i];
    for (int j = 0; j < n2; ++j)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            ++i;
        } else {
            arr[k] = R[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) {
        arr[k] = L[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        arr[k] = R[j];
        ++j;
        ++k;
    }
}

void MergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
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

int show(int arr[],int high){
    for(int i=0;i<high;i++){
        cout<<arr[i]<<" ";
    }
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
    cout<<"1. QuickSort "<<endl;
    cout<<"2. MergeSort "<<endl;
    cout<<"3. Insertion "<<endl;
    cin>>v;
    if(v==1){
        QuickSort(arr,0,l);
        cout<<"Sorted Array is: ";
        show(arr,l);
        cout<<"\nFound in index :"<<binarySearch(arr,l,item);
    }else if(v==2){
        MergeSort(arr,0,l-1);
        cout<<"Sorted Array is: ";
        show(arr,l);
        cout<<"\nFound in index :"<<binarySearch(arr,l,item);
        
    }else if(v==3){
        insertionSort(arr,l);
        cout<<"Sorted Array is : ";
        show(arr,l);
        cout<<"\nFound in index : "<<binarySearch(arr,l,item);
    }
    }
}


