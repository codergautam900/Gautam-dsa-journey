#include<iostream>
#include<math.h>
#include <algorithm>
using namespace std;


int AggressiveCow(int stalls[] , int n , int k){
    int start=1, end, mid ,ans;

    // sort them in increasing

    sort(stalls , stalls+n);
    end= stalls[n-1]-stalls[0];

    while(start<=end){


        mid = start+(end-start)/2;


        int count =1, pos=stalls[0];

        for(int i =0; i<n; i++){
            if(pos+mid<=stalls[i]){

                count++;

                pos = stalls[i];

            }
        }


        if(count<k){

            end = mid-1;
        }
        else{

            
            ans = mid;
            start=mid+1;
        }


    }



    return ans;
}



int main() {



    int n ;
    cout<<"Enter the array size: ";
    cin >>n;
    int stalls[100];
    cout<<"Enter the array values: ";

    for(int i=0; i<n; i++){

        cin >> stalls[i];
    }
        int k;
    cout<<"Enter the Cow :";
    cin >> k;

      AggressiveCow(stalls , n , k);
      int ans = AggressiveCow(stalls , n , k);
      cout<<"The maximum distance between the cows is : "<<ans<<endl;








}
