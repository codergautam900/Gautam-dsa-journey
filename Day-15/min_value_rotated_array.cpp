#include<iostream>
#include<math.h>
using namespace std;

int MinValuerotateArray(int arr[] , int n){
    int start =0 ,end=n-1, mid , ans;

    while(start<=end){
       mid = start+(end-start)/2;
       if(arr[mid]>=arr[0]){
        start = mid+1;
       }
       else{
       ans = arr[mid];
       end = mid-1;
       }


       
    }
     return ans;

   
}


int main(){

    int n;
    cout<<"Enter the array size:";
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    MinValuerotateArray(arr,n);

    int minValue =  MinValuerotateArray(arr,n);
       cout<<"Min value is: " << minValue << endl;

}