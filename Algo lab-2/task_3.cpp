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

int binarySearch(int arr[],int l,int item){
    insertionSort(arr,l);
    int first=0,last=l-1;

    while(first<=last){
        int mid=(first+last)/2;
        if(arr[mid]>item) last=mid-1;
        else if(arr[mid]<item) first=mid+1;
        else if(arr[mid]==item) return mid;
    }
    return -1;
}

void info(int a[],int l){
    insertionSort(a,l);
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
    info(arr,l);
    cout<<"(Binary) in index = "<<binarySearch(arr,l,item);
    }
    
}


