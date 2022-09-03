//Define a function to find the highest value digit in a given number.
#include<iostream.h>
using namespace std;
void highest_digit(int);
int main()
{
    int n;
    cout<<endl<<"Enter A number ==> ";
    cin>>n;
    highest_digit(n);
    return 0;
}
void highest_digit(int n)
{
    int max=0;
    while(n!=0)
    {
        if(max<n%10)
        {
            max=n%10;
        }
        n/=10;
    }
    cout<<endl<<"Highest value digit in a given number is "<<max;
}