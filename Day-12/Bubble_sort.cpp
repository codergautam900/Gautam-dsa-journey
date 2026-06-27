#include<iostream>
#include<math.h>
using namespace std;



void bubblesort(int arr[] , int n){

    int swapped = 0;


    for(int i=n-2; i>=0; i--){

        for(int j=0; j<n; j++) {

            if(arr[j]> arr[j+1]){
                swap(arr[j],arr[j+1]);

                swapped =1;
            }

            if(swapped ==0){
                break;
            }
        }


    }

    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";


    }
}




int main() {


    int n;
    cout<<"Enter the size: ";
    cin >>n;

    int arr[100];

    for(int i=0; i<n; i++){
         cin >> arr[i];
    }


    bubblesort(arr,n);







 

}