#include<iostream>
#include<math.h>
using namespace std;



// Question:-3 sqrt(x)== target value

    int binarysqrt(int x){

        int start=0,end=x,mid;

        if(x<2){
            return x;
        }

        while(start<=end){

            mid = start+(end-start)/2;

            if(mid==x/mid){
                return mid;
            }
            else if(mid<x/mid){

                start=mid+1;
            }
            else{
                end=mid-1;

                
            }


           
        }

         return mid;

    }



int main(){

    int x;
    cout<<"Enter the target: ";
    cin >> x;

     binarysqrt(x);

     int ans =   binarysqrt(x);

    cout<<"ans:"<<ans;



}