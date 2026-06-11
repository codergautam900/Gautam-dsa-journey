#include<iostream>
    #include <cmath>

using namespace::std;

class Solution {
public:
    int mySqrt(int x) {
        return (int)sqrt(x);
    }
};

int main() {

    int x;
    cout<<"Enter the no:";
    cin >>x;
      Solution obj;
    cout << obj.mySqrt(x);
}
