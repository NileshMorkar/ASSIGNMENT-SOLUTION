/*Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.*/
#include<iostream>
using namespace std;
class ReverseNumber
{
    int num;
    public:
    void set_value(int k)
    {
        num=k;
    }
    void display_value()
    {
        cout<<num;
    }
    void rev_no()
    {
        int k=0;
        while (num)
        {
            k=k*10+num%10;
            num/=10;
        }
        num=k;   
    }
};
int main()
{
    ReverseNumber n1;
    int n,rev;
    
    cout<<"Enter a number ==> ";
    cin>>n;
    
    n1.set_value(n);
    n1.rev_no();
    n1.display_value();

    return 0;
}