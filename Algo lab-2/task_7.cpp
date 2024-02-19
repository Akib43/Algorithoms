#include<iostream>
using namespace std;

bool isLeapYear(int year){
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

int leap_year_between(int st,int end){
    int count=0;
    for(int i=st;i<=end;i++){ 
        if(isLeapYear(i)) count++; 
    }
    return count;
}

int main(){
    int a,b;
    cout<<"Number of Leap years between ";
    cin>>a>>b;
    cout<<"Leap years between : "<<leap_year_between(a,b);
}