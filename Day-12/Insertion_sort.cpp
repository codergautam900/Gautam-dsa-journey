#include<iostream>
#include<math.h>
using namespace::std;


void Insertionsort(int arr[] , int n){
    
    for(int i=1;i<n; i++ ){

    
        for(int j=i; j>0; j--){

            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
                else
                break;
                
            }

        

        }

        

    

    for(int i=0; i<n; i++){

        cout<<arr[i]<< " ";
    }
}


int main(){

    int n;
    cout<<"Enter the size: ";
    cin >> n;
    int arr[100];

    for(int i=0; i<n; i++){

        cin >> arr[i];
    }

    Insertionsort(arr,n);


    











}