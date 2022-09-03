/*Define a function to check whether a given 
number is a term in a Fibonacci series or
not.
*/
#include<iostream>
using namespace std;
int fibo(int n);
int main()
{
    int n;
    cout<<"Enter A number ==> ";
    cin>>n;
    if(fibo(n))
        cout<<n<<" is term in fibonachi series";
    else
        cout<<n<<" is NOT a term in fibonachi series";
    return 0;
}
int fibo(int n)
{
    int a=-1,b=1,c=0;
    while(c<n)
    {
        c=a+b;
        if(c==n)
            return 1;
        a=b;
        b=c;
    }
    return 0;
}