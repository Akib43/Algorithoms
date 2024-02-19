#include<iostream>
using namespace std;

string Grade(float num){
    if(num>=90){
        return "A+";
    }else if(num>=85 && num<90){
        return "A";
    }else if(num>=80 && num<85){
        return "B+";
    }else if(num>=75 && num<80){
        return "B";
    }else if(num>=70 && num<75){
        return "C+";
    }else if(num>=65 && num<70){
        return "C";
    }else if(num>=60 && num<65){
        return "D+";
    }else if(num>=50 && num<60){
        return "D";
    }else return "F";
}

int main(){
    int arr[8];
    for(int i=0;i<8;i++){
        cout<<"Input number if subject "<<i+1<<" = ";
        cin>>arr[i];
    }
    for(int i=0;i<8;i++){
        cout<<" Grade of subject "<<i+1<<" : "<<Grade(arr[i])<<endl;
    }

    cout<<"Total grade : ";
    float avg,total=0;
    for(int i=0;i<8;i++){
        total=total+arr[i];
        avg=total/8;
    }
    cout<<Grade(avg);
}