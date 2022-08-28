//10. Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
    int A[10],i,sum=0;
    cout<<"Enter 10 numbers ==>"<<endl;
    for(i=0;i<10;i++)
        cin>>A[i];
    for(i=0;i<10;i++)
        sum=sum+A[i];
    cout<<"Addittion of 10 numbers ==> "<<sum;
    return 0;
}