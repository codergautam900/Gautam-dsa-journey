#include<iostream>
using namespace std;
int main() {


    // Question:- 16

    // int n ; 
    // cout<<"Enter the row no: ";
    // cin >>n;
    // for(int row = n; row>=1; row--){
    //     for(int col = 1; col<=row; col++){
    //         cout<<col << " ";
    //     }
    //     cout<<endl;
    // }

    
    // Question:- 17

    // int n ; 
    // cout<<"Enter the row no: ";
    // cin >>n;
    // for(int row = 1; row<=n; row++){
    //     for(int col = n; col>=n-(row-1); col--){
    //         cout<<col << " ";
    //     }
    //     cout<<endl;
    // }



    // Question:- 18

    int n;
    cout<<"Enter the row: ";
    cin >> n;
    for(int row =1; row<=n; row++){
        for(int col=1; col<=n-row; col++) {
            cout<<" ";
        }
        for(int col=1; col<=row; col++){

            cout<<"* " ;
        }
        cout<<endl;
    }


    







    return 0;

}