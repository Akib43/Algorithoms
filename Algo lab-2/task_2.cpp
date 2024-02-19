#include<iostream>
using namespace std;

int binarySearch(int arr[],int l,int item){
    int first=0,last=l-1;

    while(first!=last){
        int mid=(first+last)/2;
        if(arr[mid]>item) last=mid-1;
        else if(arr[mid]<item) first=mid+1;
        else if(arr[mid]==item) return mid;
    }
    return -1;
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
    cout<<" (-1 means not found) \n";
    cout<<"in index = "<<binarySearch(arr,l,item);
}