#include<iostream>
#include<math.h>
using namespace std;

int missingpositiveinteger(int arr[],int n,int k){
    int start=0,end=n-1,mid;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int missing = arr[mid] - (mid + 1);

        if (missing < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return start + k;

}







int main(){

    int n;
    cout<<"Enter the array size:";
    cin >>n;
    int arr[100];
    cout<<"Enter the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int k;
    cout<<"Enter the value of k: ";
    cin >>k;
    missingpositiveinteger(arr,n,k);

    int value =  missingpositiveinteger(arr,n,k);

    cout<<"Missing positive integer is: " << value << endl;







}