#include<iostream>
#include<math.h>
#include <climits>
using namespace std;


// Question:-1 find minimum no in array

// void minimum(int arr[] , int size){
//     for(int i=0; i<size; i++){
//         cin >> arr[i];
//     }

//     int ans = INT_MAX;

//     for(int i=0; i<size ; i++){

//         if(arr[i]<ans){
//             ans = arr[i];
//         }
//     }

//       cout << "Minimum element = " << ans;
        
    
// }



// Question:-2 find maximum no in array

// void maximum(int arr[] , int size){
//     for(int i=0; i<size; i++){
//         cin >> arr[i];
//     }

//     int ans = INT_MIN;

//     for(int i=0; i<size ; i++){

//         if(arr[i]>ans){
//             ans = arr[i];
//         }
//     }

//       cout << "Maximum element = " << ans;

        
// }


// Question:-3 Search Element


//    void SearchElement(int arr[] , int size , int x){

//     int index =-1;
//      for(int i=0; i<size; i++){
//         cin >> arr[i];
//     }

//     for(int i =0; i<size; i++){
//         if(arr[i] ==x){
//             index = i;
//             break;
//         }
         
        
//     }

//     cout<<x<<"index: "<< index;

//    }


   // Question:- 4 Reverse array 

//    void Reverse(int arr[] , int size){

//    for(int i=0; i<size; i++){
//         cin >> arr[i];
//     }
//     for(int i = size-1 ; i >= 0; i--){

//         cout << arr[i] << " ";


//     }
  

// }


// Question:-5  Second maximum no find

//    void  Secondmax(int arr[] , int size){
//     for(int i=0; i<size; i++){
//         cin >> arr[i];
//     }

//     int first = INT_MIN;

//     for(int i=0; i<size ; i++){

//         if(arr[i]>first){
//             first= arr[i];
//         }
//     }

//       cout << " first Maximum element = " << first;

//       cout<<endl;
          
//       int second = INT_MIN;
//        for(int i=0; i<size; i++){
//         if(first!=arr[i]){
//             second = max(second,arr[i]);
//         }

//        }
//        cout<<"Second Maximum element= " << second;

//    }




//  Question:-6 missing no find 

//    int missingNo(int arr[] , int size){
//     int sum =0;
//     for(int i=0; i<size-1; i++){
//         cin >> arr[i];
//     }

//     for(int i=0; i<size-1; i++){
//         sum = sum + arr[i];
//     }

//     // sum of n numbers

//     int ans = size*(size+1)/2;


//     return ans-sum;
     

//    }



//  Question:-7 Fibonacci series  first=0 second =1 


    // void   fibonacci(int arr[], int size){
    //     arr[0] = 0;
    //     arr[1] = 1;

    //     for(int i=2; i<size; i++){
    //         arr[i] = arr[i-1] + arr[i-2];
    //     }

    //     for(int i=0; i<size; i++){
    //         cout << arr[i] << " ";
    //     }
    // }
      

    // Question:-8 Rotate array

         void Rotate(int arr[] , int size){

              for(int i=0; i<size; i++){
              cin >> arr[i];
                   }


            int last = arr[size-1];

            for(int i=size-2; i>=0; i--){
                arr[i+1] =arr[i];
            }
             arr[0]=last;

       
             for(int i=0; i<size; i++){
              cout<< arr[i] <<" ";
                   }

         }







int main(){
    int size;
    cout<<"Enter the array size: ";

    cin >> size;
    int arr[100];

    // minimum(arr , size);
    // maximum(arr,size);

    // int x ;

    // cout<<"Enter search element: ";

    // cin >> x;

    // SearchElement(arr,size , x);

    // Reverse(arr,size);

    // Secondmax(arr, size);

    //   cout << missingNo(arr,size);  

    //  fibonacci(arr,size);


     Rotate(arr,size);




    
    
}