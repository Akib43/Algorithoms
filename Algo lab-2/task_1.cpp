#include<iostream>
using namespace std;

int linearSearch(int arr[],int l,int item){

    for(int i=0;i<l;i++){
        if(arr[i]==item) return i;
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
    cout<<"in index"<<linearSearch(arr,l,item);
}