#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main() {


    //  1. Taking input for the array vector 
    // int n;
    // cout<<"Enter the size of the array: ";
    // cin >>n;
    // vector<int> v(n);
    // for(int i=0; i<n; i++){
    //     cin>>v[i];
       
    // }
    // cout<<"The elements of the array are: ";

    // for(int i=0; i<n; i++){
    //     cout<<v[i]<<" ";
    // }
       
    //2. Taking input for the array vector using 
    // vector<int> v = {1,2,3,4,5,6,7,8,9};
    // cout<<"The elements of the array are: ";
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }

    
    // Create vector, declare
      // vector<int> v;
      // vector<int> v1(5,1);

      // size and capacity
      // cout<<"Size of v:"<<v.size()<<endl;
      // cout<<"Capacity of v:"<<v.capacity()<<endl;

      // v.push_back(2);
      // v.push_back(3);
      // v.push_back(5);

      //  cout<<"Size of v:"<<v.size()<<endl;
      // cout<<"Capacity of v:"<<v.capacity()<<endl;

      // update value

      // v[1]=4;
      
      //  cout<<"Size of v:"<<v.size()<<endl;
      // cout<<"Capacity of v:"<<v.capacity()<<endl;

      // v.push_back(8);
      
      //  cout<<"Size of v:"<<v.size()<<endl;
      // cout<<"Capacity of v:"<<v.capacity()<<endl;

      // v.push_back(10);
      
      //  cout<<"Size of v:"<<v.size()<<endl;
      // cout<<"Capacity of v:"<<v.capacity()<<endl;


      // Delete value from vector


      // concept 2

      // vector<int>vnew;
      // vnew.push_back(1);
      // vnew.push_back(2);
      // vnew.push_back(3);
      // vnew.push_back(4);
      // vnew.push_back(5);
      // cout<<"Size of vnew:"<<vnew.size()<<endl;
      // cout<<"Capacity of vnew:"<<vnew.capacity()<<endl;
      // vnew.pop_back();
      // cout<<"Size of vnew:"<<vnew.size()<<endl;
      // cout<<"Capacity of vnew:"<<vnew.capacity()<<endl;
      // vnew.erase(vnew.begin()+1);
      // cout<<"Size of vnew:"<<vnew.size()<<endl;
      // cout<<"Capacity of vnew:"<<vnew.capacity()<<endl;

      // for(int i=0; i<vnew.size(); i++){
      //   cout<<vnew[i]<<" ";
      // }

      // cout<<endl;

      // // Insert value in vector

      // vnew.insert(vnew.begin()+1, 10);
      // cout<<"Size of vnew:"<<vnew.size()<<endl;
      // cout<<"Capacity of vnew:"<<vnew.capacity()<<endl;
      // for(int i=0; i<vnew.size(); i++){
      //   cout<<vnew[i]<<" ";
      // }

      // cout<<endl;

      // vnew[1]=37;
      // for(int i=0; i<vnew.size(); i++){
      //   cout<<vnew[i]<<" ";
      // }

      // cout<<endl;

      // vnew.clear();    // Remove all elements from the vector
      // cout<<"Size of vnew:"<<vnew.size()<<endl;
      // cout<<"Capacity of vnew:"<<vnew.capacity()<<endl;



      // concept 3

      // vector<int> arr;
      // arr.push_back(1);
      // arr.push_back(2);
      // arr.push_back(3);
      // arr.push_back(4);
      // cout<<"Size of arr:"<<arr.size()<<endl;
      // cout<<"Capacity of arr:"<<arr.capacity()<<endl;
      // cout<<arr[0]<<endl;
      // cout<<arr.front()<<endl;
      // cout<<arr.back()<<endl;
      // cout<<arr[arr.size()-1]<<endl;


      // vector<int> a;
      // a=arr;
      // cout<<"Size of a:"<<a.size()<<endl;
      // cout<<"Capacity of a:"<<a.capacity()<<endl;



      // concept 4 



      vector<int> v1;
      v1.push_back(5);
      v1.push_back(235);
      v1.push_back(15);
      v1.push_back(54);
      v1.push_back(125);
      cout<<"Size of v1:"<<v1.size()<<endl;
      cout<<"Capacity of v1:"<<v1.capacity()<<endl;

      // sort in increasing order
      sort(v1.begin(), v1.end());
      for(int i=0; i<(int) v1.size(); i++){
        cout<<v1[i]<<" ";
      }

      // sort in  decreasing order
      sort(v1.begin(), v1.end(), greater<int>());
        //  sort(v1.rbegin(), v1.rend());

      cout<<endl;
      for(int i=0; i<(int) v1.size(); i++){
        cout<<v1[i]<<" ";
      }


      // search in binary search
      cout<<endl;
      if(binary_search(v1.begin(), v1.end(), 15)){
        cout<<"Found"<<endl;
      }
      else{
        cout<<"Not Found"<<endl;
      }


      cout<<find(v1.begin(), v1.end(), 15)-v1.begin()<<endl;
      










      







    


    






    

}