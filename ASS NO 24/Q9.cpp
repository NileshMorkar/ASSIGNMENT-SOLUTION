/*9. Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.*/
#include<iostream>
using namespace std;
float max(float,float);
int max(int,int);
int main()
{
    float n1,n2;
    float ans;
    cout<<"Enter Two numbers ==> \n";
    cin>>n1>>n2;
    ans=max(n1,n2);
    cout<<"Maximum no.==> "<<ans;
    return 0;
}
float max(float a,float b)
{
    return a>b?a:b;
}
int max(int a,int b)
{
    return a>b?a:b;
}