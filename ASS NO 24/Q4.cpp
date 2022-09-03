//Define a function to print Pascal Triangle up to N lines.
#include<iostream.h>
#include<stdio.h>
using namespace std;
int comb( int n,int r);
int fact(int r);
int main()
{
    int i,j,row,k;
    cout<<"Enter a number ==> ";
    cin>>row;
    for(i=0;i<row;i++)
    {
        k=0;
        for(j=1;j<2*row;j++)
        {
            if(j<=row+i && j>=row-i && k<=i)
            {
                //printf("%2d ",comb(i,k));
                cout<<comb(i,k)<<" ";
                k++;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }   
    return 0;
}
int fact(int r)
{
    int i,k=1;
    for(i=1;i<=r;i++)
        k=k*i;
    return k;
}
int comb( int n,int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}