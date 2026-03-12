#include <iostream>
using namespace std;
int main() {

 // type casting

    int a = 10;
    double b = 5.5;
    cout << "The sum of the two no is: "<< a + b << endl;


    int c = a + b; // implicit type casting
    cout << "The sum of the two no is: "<< c << endl;


                            
                               
        int d = (int)(a + b);     // eplicit type casting

        cout << "The sum of the two no is: "<< d << endl;

            char e = 'A';
            int f = e; // implicit type casting
            cout << "The ASCII value of " << e << " is: " << f << endl;




            double g = 568357890345.568824;

            int h = g;
            cout << "The value of g is: " << g << endl;
            cout << "The value of h is: " << h << endl;







        return 0;

}

