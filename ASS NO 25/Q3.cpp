/*Define a class Factorial and define an instance member function to find the Factorial
of a number using class.*/
#include<iostream>
using namespace std;
class factorial
{
    int num;
    public:
        void set_value(int n)
        {
            num = n;
        }
        int fact()
        {
            int i,k=1;
            for(i=2;i<=num;i++)
                k=i*k;
            return k;
        }
};
int main()
{
    int n;
    factorial k;
    cout<<"Enter a number ==> ";
    cin>>n;
    k.set_value(n);
    cout<<k.fact();
    return 0;
}