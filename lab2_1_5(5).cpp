#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int year;
    int a,b,c,d,e;
    cout<<"Enter year to find the date of East - ";
    cin>>year;
    a = year%19;
    b = year%4;
    c = year%7;
    d = ((a*19)+24)%30;
    e = (2*b+4*c+6*d+5)%7;
    if((d+e)<10){
        cout<<"March "<<(d + e + 22);
    }
    else{
        cout<<"April "<<(d + e - 9);
    }
    
    return 0;
}