#include<iostream>
#include<math.h>
using namespace std;

int SearchrotateValue(int arr[],int n,int target){

    int start=0, end=n-1 , mid;

    while(start<=end){

        mid= start+(end-start)/2;

        if(arr[mid]==target){
            return mid;

        }
        else if(arr[mid]>=arr[0]){

            if(arr[start]<=target && arr[mid]>=target){
                end = mid-1;
            }
                else{
                    start = mid+1;
                }
            }

            else 
            if(arr[mid]<=target && arr[end]>=target){
                start=mid+1;
            }
            else{
              end = mid-1; 
            }


     
        
    
    }

    return -1;


}


int main(){

    int n;
    cout<<"Enter the array size: ";
    cin >>n;
    int arr[100];
    cout<<"Enter the array values:";
    cout<<endl;
    for(int i=0; i<n; i++){
        cin >>arr[i];
    }

    int target;
    cout<<"Search value: ";
    cin >> target;

    SearchrotateValue(arr,n,target);
    int value =  SearchrotateValue(arr,n,target);

    
        cout<<"find value and index is: " << value;








}