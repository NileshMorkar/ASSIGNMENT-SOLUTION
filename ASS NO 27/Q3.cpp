/*Write a C++ program to add two complex numbers using operator overloaded by a
friend function.
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int x,y;
    public:
        Complex()
        {
            x=0; y=0;
        }
        void setData(int a,int b)
        {
            x=a;y=b;
        }
        void showData()
        {
            cout<<x<<"+("<<y<<")i\n";
        }
        friend Complex operator+(Complex,Complex);
};
Complex operator+(Complex C1, Complex C2)
{
    Complex sum;
    sum.x=C1.x+C2.x;
    sum.y=C1.y+C2.y;
    return sum;
}
int main()
{
    Complex X,Y,sum;
    X.setData(5,6);
    Y.setData(-6,3);
    sum=X+Y;            //sum=operator+(X,Y);
    sum.showData();    
    return 0;
}