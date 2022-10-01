/*Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setData(int x,int y)
        {
            a=x;b=y;
        }
        void showData()
        {
            cout<<a<<"+("<<b<<")i";
        }
        Complex add(Complex C)
        {
            Complex sum;
            sum.a=a+C.a;
            sum.b=b+C.b;
            return sum;
        }
};
int main()
{
    int a,b;
    Complex X,Y,Sum;
    cout<<"1]Enter real and imaginary part ==>";
    cin>>a>>b;
    X.setData(a,b);
    cout<<"2]Enter real and imaginary part ==>";
    cin>>a>>b;
    Y.setData(a,b);
    Sum=X.add(Y);
    cout<<"Addition ==> ",Sum.showData();
    return 0;
}