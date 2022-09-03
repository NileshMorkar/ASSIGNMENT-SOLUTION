//Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int ,int=0,int=0);
int main()
{
    int a,b,c,sum;
    cout<<"Enter Two numbers ==> ";
    cin>>a>>b;
    sum=add(a,b);
    cout<<a<<"+"<<b<<" ==> "<<sum<<endl;
    cout<<"Enter Three numbers ==> ";
    cin>>a>>b>>c;
    sum=add(a,b,c);
    cout<<a<<"+"<<b<<"+"<<c<<" ==> "<<sum<<endl;
    return 0;
}
int add(int x,int y,int z)
{
    return x+y+z;
}