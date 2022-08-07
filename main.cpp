#include <iostream>

using namespace std;

int main()
{
    int n=2;
    int sum = 0;
    int average;
    while(n < 10000)
    {
        sum+=n;


        n += 2;
    }
    average = sum/(10000/2);
    cout<<"The average is: "<<average;


    return 0;
}
