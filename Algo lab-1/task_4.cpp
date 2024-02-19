#include<iostream>
using namespace std;

void Find_odd_even(int arr[],int l){
    cout<<l<<endl;
    int even[l], odd[l];
    int o=0, e=0;
    for(int i=0;i<l;i++){
        if(arr[i]%2==0){
            even[e++]=arr[i];
        }else{
            odd[o++]=arr[i];
        }
    }
cout<<"Even number = ";
    for(int i=0;i<e;i++){
        cout<<even[i]<<" "; 
    }
cout<<endl<<"Odd number = ";
    for(int i=0;i<o;i++){
        cout<<odd[i]<<" ";
    }
}

int Even_sum(int arr[],int l){
    int evensum= 0;
     for(int i=0;i<l;i++){
       if(arr[i]%2==0){
        evensum=evensum+arr[i];
       }
    }
    return evensum;
}

int Odd_sum(int arr[],int l){
    int oddsum= 0;
    for(int i=0;i<l;i++){
       if(arr[i]%2==0){
        oddsum=oddsum+arr[i];
       }
    }
    return oddsum;
} 


int main(){
    int arr[]={1,2,4,5,7,8,9};
    int l = sizeof(arr)/sizeof(arr[0]);
    
    Find_odd_even(arr,l);
    Even_sum(arr,l);
    Odd_sum(arr,l);
}