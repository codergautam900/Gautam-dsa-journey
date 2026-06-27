#include<iostream>
#include<math.h>
#include <climits>
using namespace std;




void Selectionsort(int arr[], int n){

    int index;
   

    for(int i=0; i<n-1;i++){

        index =i;

        for(int j=i+1; j<n; j++ ){

            if(arr[j]<arr[index]){
                index =j;
            }

        }              if(index != i){
                    swap(arr[index],arr[i]);
        }




    }

    for(int i=0; i<n; i++){
        cout<<arr[i] << " ";
    }







}

























int main() {

    int n;
    cout<<"Enter the array size :";
    int arr[100];

    cin >> n;

     for(int i =0; i<n; i++){

        cin >> arr[i];
    }


    Selectionsort(arr,n);






}
