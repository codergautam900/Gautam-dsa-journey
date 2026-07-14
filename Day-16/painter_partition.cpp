#include<iostream>
#include<math.h>
#include <algorithm>
using namespace std;



// allocating books to students such that the maximum number of pages assigned to a student is minimum.




long long minTime(int arr[],int N,int M){

    if(M>N){
        return -1;
    }

    long long start =0,end=0, mid,ans;

    for(int i=0; i<N; i++){
        if(arr[i]>start){
            start=arr[i];
        }

        end = end+arr[i]; 
    }
         

    while(start<=end){

        mid = start+(end-start)/2;
      long long pages=0,count=1;

      for(int i=0; i<N;i++){

        pages=pages+arr[i];

        if(pages>mid){

            count++;

            pages=arr[i];


        }
      }


      if(count<=M){

        ans =mid;
        end=mid-1;

      }
      else
      start = mid+1;

    }

    return ans;
}




int main(){

    int N;
    cout<<"Enter the array size:";
    cin >>N;

    int arr[100];
    cout<<"Enter the array element:";
    for(int i=0; i<N; i++){

        cin >> arr[i];
    }


    int M;

    cout<<"Enter the no of painter: ";
       cin >> M;


       long long maximum =  minTime(arr,N,M);

       cout<<"Maximum value:"<<maximum;


    


}