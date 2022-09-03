/*Define overloaded functions to calculate area of circle, area of rectangle and area of
triangle
*/
#include<iostream>
#include<math.h>
using namespace std;
float area(int);
int area(int,int);
float area(int,int,int);
int main()
{
    int r,l,b,h;
    float A;
    cout<<"Enter Radius of Circle ==> ";
    cin>>r;
    A=area(r);
    cout<<"Area of Circle ==> "<<A<<endl;
    cout<<"Enter Length and Breadth of Rectangle ==> ";
    cin>>l>>b;
    A=area(l,b);
    cout<<"Area of Rectangle ==> "<<A<<endl;
    cout<<"Enter Three sides of traingle ==> ";
    cin>>l>>b>>h;
    A=area(l,b,h);
    cout<<"Area of Traingle ==> "<<A<<endl;
    return 0;
}
float area(int r)
{
    return 3.14f*r*r;
}
int area(int l,int b)
{
    return l*b;
}
float area(int l,int b,int h)
{
    float sum;
    sum=(l+b+h)/2.0;
    return sqrt(sum*(sum-l)*(sum-b)*(sum-h));
}