#include<iostream>
#include <cmath>
#include <climits>
using namespace::std;
int main(){

    int num;
    cout<<"Enter the digit :";

    cin >> num;

        int ans=0, rem;

        int x =num;

        while(num!=0){

            rem = num%10;
            num =num/10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10){
            return 0;
            }
            ans = ans*10+rem;
        }
         
          if(x==ans)
            cout<<"palindrone";

           else
          cout<<"Not palindrone ";
    

    return 0;
}