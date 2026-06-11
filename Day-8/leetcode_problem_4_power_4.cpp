#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {

    if(n < 1)
        return false;

    while(n != 1) {

        if(n % 4!=0)
            return false;

        n = n / 4;
    }

    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(isPowerOfTwo(n))
        cout << "Power of 4";
    else
        cout << "Not Power of 4";

    return 0;
}