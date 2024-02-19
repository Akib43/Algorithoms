#include<iostream>
using namespace std;

float Annual_Balance(float bal){
    float anualbal=bal+bal*0.065;
    return anualbal;
}

float After6_Balance(float bal){
    float af=bal;
    for(int i=0;i<6;i++){
    af=af+(af*0.065);
    }
    return af;
}

int main(){
    cout<<Annual_Balance(100000);
    cout<<endl<<After6_Balance(100000);
}

