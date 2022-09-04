/*Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called
*/
#include<iostream>
using namespace std;
class Square
{
    int num;
    public:
    void set_value(int n)
    {
        num=n;
    }
    int square()
    {
        return num*num;
    }
};
int main()
{
    Square Sq;
    int k;
    cout<<"Enter a no.==> ";
    cin>>k;
    Sq.set_value(k);
    cout<<"Square ==> "<<Sq.square();
    return 0;
}