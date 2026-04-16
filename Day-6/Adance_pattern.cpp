#include<iostream>
using namespace::std;
int main() {



    //  Question:-23

    // int n;
    // cout<<"Enter the row: ";
    // cin >> n;
    // for(int row =1; row<=n; row++){
    //     // space print
    //     for(int col=1; col<=n-row; col++)
    //         cout<<" ";

    //         // *print
    //         for(int col=1; col<=2*row-1; col++)

    //             cout<<"*";
    //             cout<<endl;
                     
    // }


     //  Question:-24

    // int n;
    // cout<<"Enter the row: ";
    // cin >> n;
    // for(int row =n; row>=1; row--){
    //     // space print
    //     for(int col=1; col<=n-row; col++)
    //         cout<<" ";

    //         // *print
    //         for(int col=1; col<=2*row-1; col++)

    //             cout<<"*";
    //             cout<<endl;
                
        
    // }

    
     //Question:-25

    // int n;
    // cout<<"Enter the row: ";
    // cin >> n;
    // for(int row =1; row<=n; row++){
    //     // space print
    //     for(int col=1; col<=n-row; col++)
    //         cout<<" ";

    //         // *print
    //         for(int col=1; col<=row; col++)

    //             cout<<col<<" ";

    //             for(int col=row-1; col>=1; col--)

    //             cout<<col<<" ";
                


    //             cout<<endl;
                     
    // }




       //Question:-26

    // int n;
    // cout<<"Enter the row: ";
    // cin >> n;
    // for(int row =n; row>=1; row--){
    //     // space print


    //     for(int col=1; col<=row; col++)
    //         cout<<"*";

    //         // // *print
    //         // for(int col=1; col<=row; col++)

    //         //     cout<<"*";

    //             // space

    //             for(int col=1; col<=2*n-2*row; col++)

    //             cout<<" ";


    //             for(int col=1; col<=row; col++)
    //             cout<<"*";
    //             cout<<endl;


    // }


    //              for(int row =1; row<=n; row++){
    //     // space print


    //     for(int col=1; col<=row; col++)
    //         cout<<"*";

    //         // // *print
    //         // for(int col=1; col<=row; col++)

    //         //     cout<<"*";

    //             // space

    //             for(int col=1; col<=2*n-2*row; col++)

    //             cout<<" ";


    //             for(int col=1; col<=row; col++)
    //             cout<<"*";
    //             cout<<endl;

         
                     
// }




// Question:-27

   int n;
   cout<<"Enter the row: ";
   cin >> n;
   for(int row =1; row<=n; row++){

    // *print 

    for(int col=1; col<=row; col++)
    cout<<"*";

    // space

    for(int col=1; col<=2*n-2*row; col++) 

        cout<< " ";

        // *print

        for(int col=1; col<=row; col++) 

        
        cout<<"*";
        cout<<endl;
          
   }



   for(int row=n-1; row>=1; row--){

    // *print

    for(int col =1; col<=row; col++)

    cout<< "*";

    // space

    for(int col=1; col<=2*n-2*row; col++)
    cout<<" ";
    // *print

    for(int col=1; col<=row; col++)
    cout<<"*";
    cout<<endl;
   }
   



    










    







return 0;


}