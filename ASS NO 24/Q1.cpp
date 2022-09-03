//Define a function to check whether a given number is a Prime number or not.
#include<iostream.h>
using namespace std;
void check_prime(int);
int main()
{
    int n;
    cout<<"Enter a number ==> ";
    cin>>n;
    check_prime(n);
    return 0;
}
void check_prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
        cout<<n<<" is prime number .";
    else
        cout<<n<<" is not a prime number .";
}