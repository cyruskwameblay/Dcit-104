#include <iostream>
//Certified By Cyrus Bonzoe Blay (10958458).
//Sum of prime numbers less than a given number.

using namespace std;
void prime(int t);

int main(){
    int number =0;
    cout<<"Enter any number"<<"\n";
    cin>>number;
    prime(number);
}
void prime (int t){
    int sum =0;
    for (int a = t; a > 1;a--){
             bool not_a_prime=false;
    for(int b = 2;b < a; b++){
            if(a%b == 0)
                {
                not_a_prime=true;
            b = a;
            }

    }
       if(not_a_prime == false)
        {
            cout<<a<<" is prime"<<"\n";
         sum = sum + a;
       }
    }


    cout<<"The sum is:  "<<sum;


}
