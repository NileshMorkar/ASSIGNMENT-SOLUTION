//Create a complex class and overload assignment operator for that class.
#include<iostream>
using namespace std;
class Complex
{
    private:
        int r,i;
    public:
        Complex(int real=0,int img=0)
        {
            r=real;i=img;
        }
        void setData(int x,int y)
        {
            r=x;i=y;
        }
        void getData()
        {
            cout<<r<<"+("<<i<<")i"<<endl;
        }
        Complex operator =(Complex C)
        {
            r=C.r;
            i=C.i;
            return C;
        }
};
int main()
{
    Complex c1,c2,c3(2,-9);
    c1=c2=c3;
    c1.setData(3,6);
    c1.getData();
    c2.getData();
    c3.getData();
    return 0;
}