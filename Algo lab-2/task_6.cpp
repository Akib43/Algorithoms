#include<iostream>
using namespace std;

float Fah_to_cel(float f){ return ((5*f)-(5*32))/9;}

float Cel_to_fah(float c){ return ((9*c/5)+32);}

int main(){
    float a,b;
    int q;
    cout<<"1. Fahrenhight to celsius. \n";
    cout<<"2. Celsius to Fahrenhite. \n";
    cout<<"Enter the type of search you want to perform (1/2): ";
    cin>>q;

    cout<<"(-1 means not found) \n";
    if(q==1){ 
        cout<<"Insert fahrenhite : ";
        cin>>a;
        cout<<"Celsius :"<<Fah_to_cel(a)<<endl; }
    else if(q==2){ 
        cout<<"Insert fahrenhite : ";
        cin>>b;
        cout<<Cel_to_fah(b); }
    
    
}