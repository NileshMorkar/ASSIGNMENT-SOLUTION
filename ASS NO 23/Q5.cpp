//Write a C++ program to calculate the volume of a cuboid

#include<iostream.h>
using namespace std;
int main()
{
    int l,b,h,volume;
    cout<<"Enter length,Breadth,Height of Cuboid ==> ";
    cin>>l>>b>>h;
    volume=l*b*h;
    cout<<"Volume of Cuboid is "<<volume;
    return 0;
}