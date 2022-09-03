//Define a function to calculate x raised to the power y.
#include<iostream.h>
using namespace std;
int power(int,int);
int main()
{
    int x,y,Ans;
    cout<<"Enter a number ==> ";
    cin>>x;
    cout<<"Enter a power ==> ";
    cin>>y;
    Ans=power(x,y);
    cout<<endl<<x<<"^"<<y<<" ==> "<<Ans;
    return 0;
}
int power(int x,int y)
{
    int i,mult=1;
    for(i=1;i<=y;i++)
    {
        mult*=x;
    }
    return mult;
}
