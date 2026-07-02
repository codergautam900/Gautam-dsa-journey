#include<iostream>
#include<math.h>
using namespace std;


int binaryposition(int arr[], int n , int target){

    int start=0, end=n-1, mid;
    while(start<=end){

        mid = start+(end-start)/2;
        
        if(arr[mid]==target){
            return mid;
        }

        else if(arr[mid]<target){
            start = mid+1;
            
        }

        else {

        end = mid-1; }

        return start;

    }



}



// Question:-2 Search Insert position

int main(){

    int n;
    
    cout<<"Enter the size: ";

    cin >> n;

    int arr[100];

    for(int i=0; i<n;i++){
        cin >> arr[i];
    }

    int target;
    cout<<"Enter the target value right posotion:";
     
    cin >> target;

    binaryposition(arr,n,target);

    int ans = binaryposition(arr,n,target);

    cout<<"right position : "<<ans;






}