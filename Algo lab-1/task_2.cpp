#include<iostream>
using namespace std;

long By_age(int ag){
    long oneYr=(365.25*24*60*60);
    return ag*oneYr;
}

bool isLeapYear(int year){
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

long By_year(int yr,int till){
    long age=0;
    for(int i=yr;i<till;i++){
        if(isLeapYear(i)){
            age=age+(366*24*60*60);
        }else{
            age=age+(365*24*60*60);
        }
    }
    return age;
}

int main(){
    cout<<"By Year : "<<By_year(2002,2024)<<endl;
    cout<<"BY Age : "<<By_age(22);
}