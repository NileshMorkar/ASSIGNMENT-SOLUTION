/*Define a class Rectangle and define an instance member function to find the area of
the rectangle*/

#include<iostream>
using namespace std;
class Area
{
    int l,b;
    public:
    void set_value(int x,int y)
    {
        l=x;b=y;
    }
    int rectangle()
    {
        return l*b;
    }
};
int main()
{
    int l,b;
    Area A;
    cout<<"\nEnter length and breadth of Rectangle ==> ";
    cin>>l>>b;
    A.set_value(l,b);
    cout<<"\nArea of Rectangle ==> "<<A.rectangle()<<endl;
        return 0;
}