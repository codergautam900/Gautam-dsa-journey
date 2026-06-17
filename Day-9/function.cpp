#include<iostream>
using namespace::std;

// bool prime(int n){

//     if(n<2){
//         return 0;
//     }
//     else 
//     for(int i=2; i<n; i++){
//         if(n%i==0)
//         return 0;
// }
//       return 1;

// }

// int fact(int n){
//     int ans =1;
//     if(n<1){
//         return 0;
//     }

//     else if(n==1){
//         return 1;
//     }
//     else {

//     for(int i=1; i<=n; i++){

//         ans=ans*i;
//     }
//     return ans;
// }

// }

// int sum(int m,int n){         // function declaration

//     int ans = m+n;           // function define
//     return ans;

// }

// int Mul(int o ,int p){
//     int ans = o*p;
//     return ans;
// }

// int Divide(int s ,int t){
//     int ans = s/t;
//     return ans;
// }  




// void Inc(int n){         // pass by value 
//     n++;
// }

// void Inc(int &n){       // pass by referance
//     n++;
// }




  void swap(int &m, int &n){
    int temp;
    temp=m;
    m=n;
    n=temp;
  }





















int main() {

    int a,b;
    cout<<"Enter the no: ";
    cin >>a>>b;

    // cout<<prime(a);
    // cout<<endl;
    // cout<<fact(a);
    // cout<<endl;
    // cout<<prime(b);
    // cout<<endl;
    // cout<<fact(b);

    // cout<<sum(a,b);
    // cout<<endl;
    // cout<<Mul(a,b);
    // cout<<endl;
    // cout<<Divide(a,b);

    // Inc(a);
    // cout<<a;

    swap(a,b);
    cout<<a<<" "<<b<<" ";




}
