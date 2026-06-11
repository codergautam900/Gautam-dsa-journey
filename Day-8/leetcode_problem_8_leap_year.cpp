#include<iostream>
using namespace::std;
int main() {

    int num;

    cout<<"Enter the no is leap year  or not: ";
    cin >>num;
    if(num%400==0&&num%100!=0 || num%4==0){
        cout<<"Leap year";
    }
    else
    cout<<"Not a leap year";

}