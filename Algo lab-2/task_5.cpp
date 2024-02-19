#include<iostream>
using namespace std;

float Area_square(float a){ return a*a; }

float Area_rectangle(float a,float b){ return a*b; }

float Area_rhombus(float d1,float d2){ return (d1*d2)/2; }

float Area_parallelogram(float b,float h){ return b*h;}

int main(){
    float a,b;
    cout<<"1. square \n";
    cout<<"2. Rectangle \n";
    cout<<"3. Parallelogram \n";
    cout<<"4. Rhoumbus \n";
    cout<<"Choose operation (1/2/3/4) : ";
    int q;
    cin>>q;
    if(q==1){
        cout<<"Insert 1 side value ";
        cin>>a>>b;
        cout<<"Area : ";
        cout<<Area_square(b)<<endl; }
    else if(q==2){
        cout<<"Insert both sides value ";
        cin>>a>>b;
        cout<<"Area : ";
        cout<<Area_rectangle(a,b)<<endl;}
    else if(q==3){
        cout<<"Insert height and base ";
        cin>>a>>b;
        cout<<"Area : ";
        cout<<Area_parallelogram(a,b)<<endl;}
    else if(q==4){
        cout<<"Insert both diagonal values ";
        cin>>a>>b;
        cout<<"Area : ";
        cout<<Area_rhombus(a,b);}
}