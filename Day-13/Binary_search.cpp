#include<iostream>
#include<math.h>
using namespace std;


int Binarysearch(int arr[] , int n , int key){

    int start =0;
    int end = n-1;
    int mid=(start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        else if(arr[mid]<key){

            start = mid+1;
        }
        else{

            end = mid-1;
        }

        mid=(start+end)/2;

        
    
    }
    return -1;
     
   
}


int main(){
     int n;
    cout<<"Enter the array size :";
    int arr[100];

    cin >> n;

     for(int i =0; i<n; i++){

        cin >> arr[i];
    }

    int key;
    cout<<"Enter the search value :";
    cin >>key;

    

    Binarysearch(arr,n,key);

     int ans = Binarysearch(arr, n, key);

      if(ans == -1)
     {
      cout << "Not Found";
        }
      else
       {
     cout << "Element found at index " << ans;
        }


}