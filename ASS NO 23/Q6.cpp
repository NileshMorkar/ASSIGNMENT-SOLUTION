//Write a C++ program to calculate an average of 3 numbers.
#include<iostream.h>
using namespace std;
int main()
{
    int l,b,h;
    float avg;
    cout<<"Enter three numbers ==> ";
    cin>>l>>b>>h;
    avg=(l+b+h)/3.0;
    cout<<"Average of three numbers is "<<avg;
    return 0;
}