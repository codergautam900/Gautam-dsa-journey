#include<iostream>
#include<math.h>
using namespace std; 

int kokobanana(int arr[], int n , int h){

    int start=0, end=0 , mid , ans;
    long long int sum =0;

    for (int i=0; i<n; i++){

        sum = sum+arr[i];
        end = max(end, arr[i]);
    }

    start = sum/h;

    while(start<=end){


        mid = start+(end-start)/2;

        long long int hours=0;

        for(int i=0; i<n; i++){

            hours = hours + ceil((double)arr[i]/mid); 

        }

        if(hours>h){

            start = mid+1;
        }
        else{

            ans = mid;
            end = mid-1;
        }
    }
   

  
  return ans ;



}






int main(){


    int n;
    cout<<"Enter the size: ";
    cin >>n;
    int arr[100];
    cout<<"Enter the array elements: ";

    for(int i=0; i<n; i++) {

        cin >> arr[i];
    }

    int h;
    cout<<"Enter the hours: ";
    cin >> h;

    kokobanana(arr,n,h);

    int ans = kokobanana(arr,n,h);
    cout<<"The minimum eating speed is : "<<ans<<endl;


    


}