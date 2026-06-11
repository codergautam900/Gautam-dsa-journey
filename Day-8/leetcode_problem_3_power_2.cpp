#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {

    if(n < 1)
        return false;

    while(n != 1) {

        if(n % 2 == 1)
            return false;

        n = n / 2;
    }

    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(isPowerOfTwo(n))
        cout << "Power of 2";
    else
        cout << "Not Power of 2";

    return 0;
}