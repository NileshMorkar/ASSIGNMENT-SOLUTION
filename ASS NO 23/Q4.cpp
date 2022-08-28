//Write a C++ program to calculate the area of a circle
#include<iostream.h>
using namespace std;
int main()
{
    int r;
    float area;
    cout<<"Enter Radius of Circle ==> ";
    cin>>r;
    area=3.14*r*r;
    cout<<"Area of Circle is "<<area;
    return 0;
}