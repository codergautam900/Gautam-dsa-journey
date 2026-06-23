#include<iostream>
#include<math.h>
using namespace std;



void printarray(int arr[] , int size){

    for(int i =0; i<size; i++){

        cin >> arr[i] ;
    }

    for (int i=0; i<size; i++){

        cout<<arr[i]<<" ";
    }


}









int main() {




     // without function used print array 
//     int size;
//    cout<<"Enter the size:";

//     cin >> size;

//     int arr[1000];

//     for(int i =0; i<size; i++){


//         cin>>arr[i];
//     }
    
//     for(int i =0; i<size; i++){

//         cout<<arr[i] << " ";
//     }


    // function use print array

        int size;
        cout<<"Enter the size array: ";
        cin >> size;
        int arr[100];
        printarray(arr , size);











    return 0;














}