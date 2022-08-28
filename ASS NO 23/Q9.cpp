//Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,max;
    cout<<"Enter Two numbers ==> ";
    cin>>a>>b;
    //a>b?cout<<a<<" is greater number":cout<<b<<" is greater number";
    max=a>b?a:b;
    cout<<max<<" is greater number";
    return 0;
}