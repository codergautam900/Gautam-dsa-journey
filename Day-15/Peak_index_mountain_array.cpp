#include<iostream>
#include<math.h>
using namespace std;



// Peak Index in Mountain array

int  PeakIndexMountainArray(int arr[], int n){
    int start=0, end=n-1, mid;

    while(start<=end){
        mid = start+(end-start)/2;


        // peak element

        if( mid > 0 && mid < n-1 && arr[mid]>arr[mid-1] && arr[mid] > arr[mid+1]){
            return mid;
        }  

        // Right side move

        else if(arr[mid]>arr[mid-1]){

            start=mid+1;
        }

        // left side move

        else{

        end = mid-1;
        }


        
    }

    return -1;

}






int main(){

    int n;
    cout<<"Enter the size array:";
    cin>>n;
    int arr[100];

    for(int i=0; i<n; i++){

        cin >> arr[i];
    }

    PeakIndexMountainArray(arr,n);

    int peakIndex = PeakIndexMountainArray(arr,n);
    cout << "Peak Index = " << peakIndex << endl;
    cout << "Peak Value = " << arr[peakIndex];








}