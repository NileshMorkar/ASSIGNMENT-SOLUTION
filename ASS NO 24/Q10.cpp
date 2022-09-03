/*Write functions using function overloading to add two numbers having different data
types.*/
#include<iostream.h>
using namespace std;
//int add(int,int);
float add(float,float);
int main()
{
    float a,b,sum;
    cout<<"Enter Two numbers ==> ";
    cin>>a>>b;
    sum=add(a,b);
    cout<<"SUM==> "<<sum;    
    return 0;
}
// int add(int x,int y)
// {
//     return x+y;
//}
float add(float x,float y)
{
    return x+y;
}