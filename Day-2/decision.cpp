#include<iostream>
using namespace std;

int main() {
        // Age eligibility for voting
    // cout<<"Enter your age: ";
    //    int age;
    //    cin>>age;

    //    if(age>=18){
    //     cout<<"You are eligible to vote."<<endl;
    //    }
    //    else{
    //     cout<<"You are not eligible to vote."<<endl;
    //    }


      // Check if a number is even or odd


        // cout<<"Enter a number:";
        // int num;
        // cin >> num;

        // if(num % 2 == 0){
        //     cout<<num<<" is an even number."<<endl;
        // }
        // else{
        //     cout<<num<<" is an odd number."<<endl;
        // }


        // check if a number is positive, negative or zero


        // cout<<"Enter a number:";
        // int num;
        // cin >> num;
        // if(num > 0) {
        //     cout<<num<<" is a positive number."<<endl;
        // }
        // else if(num < 0){
        //     cout<<num<<" is a negative number."<<endl;
        // }
        // else{
        //     cout<<"The number is zero."<<endl;
        // }



             // Check if a year is a leap year or not

        // cout<<"Enter a year: ";
        // int year;
        // cin >> year;
        // if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        //     cout<<year<<" is a leap year."<<endl;
        // }
        // else{
        //     cout<<year<<" is not a leap year."<<endl;
        // }



               // Check if a character is a vowel or consonant


            //    cout<<"Enter a character: ";
            //     char ch;
            //     cin >> ch;
            //     if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            //        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            //         cout<<ch<<" is a vowel."<<endl;
            //     }
            //     else{
            //         cout<<ch<<" is a consonant."<<endl;
            //     }




            // Check if a number is prime or not

            // cout<<"Enter a number: ";
            // int num;
            // cin >> num;
            // bool isPrime = true;
            // if(num <= 1){
            //     isPrime = false;
            // }
            // else{
            //     for(int i = 2; i <= num/2; i++){
            //         if(num % i == 0){
            //             isPrime = false;
            //             break;
            //         }
            //     }
            // }
            // if(isPrime){
            //     cout<<num<<" is a prime number."<<endl;
            // }
            // else{
            //     cout<<num<<" is not a prime number."<<endl;
            // }



            // Check if a number is a palindrome or not

            // cout<<"Enter a number: ";
            // int num;
            // cin >> num;
            // int originalNum = num;
            // int reversedNum = 0;
            // while(num > 0){
            //     int digit = num % 10;
            //     reversedNum = reversedNum * 10 + digit;
            //     num /= 10;
            // }

            // if(originalNum == reversedNum){
            //     cout<<originalNum<<" is a palindrome."<<endl;
            // }
            // else{
            //     cout<<originalNum<<" is not a palindrome."<<endl;
            // }

            //  Check if a number is an Armstrong number or not


            //  cout<<"Enter a number: ";
            //     int num;
            //     cin >> num;
            //     int originalNum = num;
            //     int sum = 0;
            //     while(num > 0){
            //         int digit = num % 10;
            //         sum += digit * digit * digit;
            //         num /= 10;
            //     }
            //     if(originalNum == sum){
            //         cout<<originalNum<<" is an Armstrong number."<<endl;
            //     }
            //     else{
            //         cout<<originalNum<<" is not an Armstrong number."<<endl;
            //     }



                // Check if a number is a perfect number or not

                 cout<<"Enter a number: ";
                    int num;
                    cin >> num;
                    int sum = 0;
                    for(int i = 1; i <= num/2; i++){
                        if(num % i == 0){
                            sum += i;
                        }
                    }
                    if(sum == num){
                        cout<<num<<" is a perfect number."<<endl;
                    }
                    else{
                        cout<<num<<" is not a perfect number."<<endl;
                    }
            









    return 0;
}