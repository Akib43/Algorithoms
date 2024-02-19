#include<iostream>
#include<math.h>
using namespace std;

float base_height(float base,float height){
    float area=0.5*base*height;

    return area;
} 

float three_side(float side1,float side2,float side3){
    float S=(side1+side2+side3)*0.5;

    float area=sqrt(S*(S-side1)*(S-side2)*(S-side3));

    return area;
}

int main(){
    cout<<"Area With base Height ="<<base_height(1,1)<<endl;
    cout<<"Area with 3 side ="<<three_side(1,1,1);
}