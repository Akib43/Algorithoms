#include<iostream>
using namespace std;

bool prim(int p){

    for(int i=2;i<p/2;i++){
        if(p%i==0){
            break;
        }
        return true;
    }
    return false;
};

int main(){

    cout<<"Prim number (0 =Flase 1=true) = "<<prim(4);
}