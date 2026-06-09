#include<iostream>

#include<string>
using namespace::std;
int main() {


     // binary to decimal

    //  int num ;
    // cout << "Enter the number :";

    // cin >> num ;

    // int rem, ans=0 , mul=1; 

    // while(num>0){


    //    // remeinder
    //     rem = num%2;
    //     //quotient
    //     num = num/2;
    //     //ans 
    //     ans = rem*mul+ans;

    //     // mul

    //     mul = mul*10;
    // }

    // cout << ans << endl;


    // decimal to binary 

    // int num;
    // cout<<" Enter the number: ";
    // cin >> num;

    // int rem, ans=0, mul=1;

    // while(num>0){

    //     rem = num%10;
    //     num = num/10;

    //     ans = rem*mul + ans;

    //     mul = mul*2;


    // }

    // cout <<ans <<endl;



    // decimal to octal 

    // int num;
    // cout<< " Enter the number : ";

    // cin >> num;

    // int rem, ans =0, mul=1;

    // while(num){

    //     rem = num%8;
    //     num = num/8;

    //     ans = rem*mul + ans;
    //     ;
    //   mul = mul*10;
    // }

    // cout <<  ans <<endl;


    // decimal to hexadecimal


    int num;
    cout<< " Enter the number : ";

    cin >> num;


    string hax = "";

    while(num>0){

        int rem = num%16;

        if(rem<10){

          hax = char(rem+'0') + hax;
        }

        else 
        hax = char(rem-10+'A') + hax;


        num = num/16;

      }

       cout << "Hexadecimal " << hax;

return 0;

}