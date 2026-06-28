#include<iostream>
#include<math.h>
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
}


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

    

    Selectionsort(arr,n);
     cout << "Sorted Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<endl;

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