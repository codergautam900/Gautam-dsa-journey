#include<iostream>
using namespace::std;
int main(){

    int num;
    cout<<"Enter the digit :";

    cin >> num;

    while(num>9){

        int ans=0, rem;

        while(num!=0){

            rem = num%10;
            num =num/10;
            ans = ans+rem;
        }

        num = ans;
         
        cout<<"sum of digit : "<<num <<endl;
    }

    return 0;
}