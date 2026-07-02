#include<iostream>
#include<math.h>
using namespace std;



 int binaryfirst(int arr[], int n, int target){

    int start=0, end=n-1,mid,first=-1,last=-1;

    while(start<=end){

        mid=start+(end-start)/2;

        if(arr[mid]==target){
            first=mid;
            end = mid-1;
        }

        else if(arr[mid]<target){

            start = mid+1;
        }
        else
        end=mid-1;
    }


       return first;

 }


 int binarylast(int arr[], int n, int target){

    int start=0, end=n-1,mid,first=-1,last=-1;

    while(start<=end){

        mid=start+(end-start)/2;

        if(arr[mid]==target){
            last=mid;
            start = mid+1;
        }

        else if(arr[mid]<target){

            start = mid+1;
        }
        else
        end=mid-1;
    }


       return last;

 }





// Question:-1 first and last position find in sorted array

int main(){

    int n;
    cout<<"Enter the size of array:";
    cin >> n;
    
    int arr[100];

    for(int i =0; i<n; i++){

        cin >> arr[i];
    }

    int target;
     cout<<"Enter the target value:";

     cin >> target;

     binaryfirst(arr,n,target);

     binarylast(arr,n,target);

     int first = binaryfirst(arr,n,target);
     int last = binarylast(arr,n,target);

     int count = last-first+1;
     cout << "Count of occurrences: " << count;












}