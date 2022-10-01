/*Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        void setData(int x,int y)
        {
            real=x;img=y;
        }
        void showData()
        {
            cout<<real<<"+("<<img<<")i"<<endl;
        }
        friend istream & operator >>(istream & , Complex &C);
        friend ostream & operator <<(ostream &, Complex C);
};
istream & operator >>(istream & cin,Complex &C)
{
    cin>>C.real>>C.img;
    return cin;
}
ostream & operator <<(ostream & cout,Complex C)
{
    cout<<C.real<<"+("<<C.img<<")i"<<endl;
    return cout;
}
int main()
{
    Complex c1,c2;
    cout<<"Enter Complex number ==> ";
    cin>>c1;
    cout<<c1;
    return 0;
}
