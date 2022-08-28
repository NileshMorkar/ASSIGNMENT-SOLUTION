//Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Two numbers (a and b) ==> ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a==> "<<a<<endl<<"b==> "<<b;
    return 0;
}