#include<iostream>
using namespace::std;
int main() {

    int num;
    cout<<"Enter the no:";
    cin >>num;
    if(num==0){
        num = num^1;
        cout<<num;
    }

    int ans=0, mul=1,rem;

    while(num){

        rem=num%2;
        rem=rem^1;
        num=num/2;
        ans = ans+rem*mul;

        mul= mul*2;


    }
                cout <<"complement " <<ans<<endl;


}