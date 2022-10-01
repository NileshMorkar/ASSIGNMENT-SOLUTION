/*Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
Output*/
#include<iostream>
using namespace std;
class Fraction
{
    private:
        int numerator,denominator;
    public:
        Fraction (int  n=0, int d=0)
        {
            numerator=n;denominator=d;
        }
        Fraction operator++()       //pre increment
        {
            Fraction temp;
            temp.denominator=++denominator;
            temp.numerator=++numerator;
            return temp;
        }
        Fraction operator++(int)       //post increment
        {
            Fraction temp;
            temp.denominator=denominator++;
            temp.numerator=numerator++;
            return temp;
        } 
        friend ostream & operator <<(ostream &os, Fraction F);
        friend istream & operator >>(istream &os ,Fraction &F);

};
ostream & operator <<(ostream & os , Fraction F)
{
    cout<<F.numerator<<"/"<<F.denominator<<endl;
    return cout;
}
istream & operator >>(istream & os ,Fraction &F)
{
    cout<<"Numerator   :";
    cin>>F.numerator;
    cout<<"Denominator :";
    cin>>F.denominator;
    return cin;
}
int main()
{
    Fraction f1,f3,f2;
    cout<<"f1 : "<<f1;
    cout<<"f2 : "<<f2;   
    cout<<"Enter First Fraction Value :\n";
    cin>>f1;
    cout<<"f1 :"<<f1;
    cout<<"f1++ :"<<f1++;
    cout<<"++f1 :"<<++f1;
    cout<<"Enter Second Fraction Value :\n";
    cin>>f2;
    cout<<"f2 :"<<f2;
    cout<<"f2++ :"<<f2++;
    return 0;
}