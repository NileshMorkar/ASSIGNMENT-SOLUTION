/*Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        Complex()
        {
            real=0; img=0;
        }
        void setData(int a,int b)
        {
            real=a;img=b;
        }
        void showData()
        {
            cout<<real<<"+("<<img<<")i\n";
        }
        Complex operator+(Complex C)
        {
            Complex Sum;
            Sum.real=real+C.real;
            Sum.img=img+C.img;
            return Sum;
        }
        Complex operator-(Complex C)
        {
            Complex Sub;
            Sub.real=real-C.real;
            Sub.img=img-C.img;
            return Sub;
        }
        int operator==(Complex C)
        {
            if(C.real==real && C.img==img)
                return 1;
            return 0;    
        }
        Complex operator*(Complex C);
};
Complex Complex::operator*(Complex C)
{
    Complex mult;
    mult.real=(real*C.real)-(img*C.img);
    mult.img=(real*C.img)+(img*C.real);
    return mult;
}
        
int main()
{
    int a,b;
    Complex c1,c2,c3;
    cout<<"1]\nEnter Real and imag part ==> ";
    cin>>a>>b;
    c1.setData(a,b);
    cout<<"2]\nEnter Real and imag part ==> ";
    cin>>a>>b;
    c2.setData(a,b);
    c1.showData();
    c2.showData();
    c3=c1+c2;
    cout<<"\nAddition ==> ",c3.showData();
    c3=c1-c2;
    cout<<"\nSubtraction ==> ",c3.showData();
    c3=c1*c2;
    cout<<"\nMultiplication ==> ",c3.showData();
    
    cout<<"\nc1==c2 ==> "<<(c1==c2);
    
    return 0;
}