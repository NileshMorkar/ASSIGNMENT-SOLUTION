/*Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number
*/
#include<iostream>
using namespace std;
class complex
{
    private:
        int real,img;
    public:
        void input()
        {
            cout<<endl<<"Enter a real part ==> ";
            cin>>real;
            cout<<"Enter a imiginary part ==> ";
            cin>>img;
        }
        void display()
        {
            if(img>0)
                cout<<endl<<real<<"+("<<img<<")i";
            else
                cout<<endl<<real<<"+("<<img<<")i";
        }
};
int main()
{
    complex c1;
    c1.input();
    c1.display();
    return 0;
}