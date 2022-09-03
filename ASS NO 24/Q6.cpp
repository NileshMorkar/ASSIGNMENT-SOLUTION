//Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std ;
int main()
{
    int x,y;
    cout<<"Enter Two number X and Y ==> ";
    cin>>x>>y;
    swap(x,y);
    cout<<"\nX== "<<x<<"\nY== "<<y;
    return 0;
}
void swap(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}