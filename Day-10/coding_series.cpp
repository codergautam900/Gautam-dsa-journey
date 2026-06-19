#include<iostream>
#include<math.h>
using namespace std;



// Question:-1 convert small latter to capital letter


//    char convert(char name) {

//     char ans = name -'a'+'A';

//     return ans;






//    }



   //  Question:2 check no is armstrong or not          153 = 1^3+5^3+3^3



      // int count_digit(int num){
      //   int count =0;

      //     while(num){

      //         count++;

      //   num =num/10;

      

      //     }

      //     return count;


      // }


      // int Armstrong(int num , int digit){

      //   int n = num , ans=0 ,rem;

      //   while(num){

      //        rem = num%10;
      //       num=num/10;

      //       ans = ans + round(pow(rem, digit));

      //        cout << "ans = " << ans << endl; 

      //   }

      //   if( n==ans){

      //       return 1;
      //   }
      //   else
      
      //         return 0;

      //   }





      // Question:-3 find trailing zero in factorial of number


      // int trailing_zero(int num){

      //  int count =0;
      //   while(num>=5){

      //     count=count+num/5;

      //     num=num/5;
      //   }

      //   return count;

      // }



      // Question:-4 a,b,c,d is rectangle or not

    //  void    rectangle(int a, int b, int c, int d){
    //     if(a==b&&c==d || a==c&&b==d || b==c&&a==d || b==a&&d==a){               

    //       cout<<"rectangle";
    //     }

    //     else

    //     cout<<"not rectangle";
        


    //   }




    // Question:-5  Bishnop problem solve



    int bishop(int A ,int B){

      int count =0;

      count+= min(8-A,8-B);
        count+= min(8-A,B-1);
      count+= min(A-1,B-1);
      count+= min(A-1,8-B);


      return count;


    }




    // Nim game problem solve


    // void Nim(int n){

    //   if(n%4==0){

    //     cout<<"Lose"<<endl;
    //   }
    //   else{
    //     cout<<"Win"<<endl;
    //   }
    // }










    


      



int main(){

    // char name;
    // cout<<"Enter character: ";
    // cin >>name;

    // convert(name);

    // cout<<"convert the character:"<<convert(name)<<endl;



    // int num;
    // cout<<"Enter the number:";

    // cin >>num;

  // int digit = count_digit(num);
  // cout << "digit = " << digit << endl;

  //   cout<<Armstrong(num,digit);


          // cout<<trailing_zero(num);

          // int a,b,c,d;

          // cout<<"Enter the rectangle side: ";

          // cin >>a>>b>>c>>d;

          // rectangle(a,b,c,d);



        //   int a ,b;
        //   cout<<"Enter the bishop position: ";
        //   cin >>a>>b;

        // cout<<  bishop(a,b);


        // int a ;
        // cout<<"Enter the nim game number: ";
        // cin >>a;

        // Nim(a);





















}
