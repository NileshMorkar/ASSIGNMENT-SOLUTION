/*Write a C++ program to overload unary operators that is increment and decrement.
*/
#include<iostream>
using namespace std;
class Value
{
    private:
        int x;
    public:
        Value()
        {
            x=0;
        }
        void setData(int a)
        {
            x=a;
        }
        int getData()
        {
            return x;
        }
        Value operator++()
        {
            Value temp;
            temp.x=++x;
            return temp;
        }
        Value operator++(int)
        {
            Value temp;
            temp.x=x++;
            return temp;
        }
        Value operator--()
        {
            Value temp;
            temp.x=--x;
            return temp;
        }
        Value operator--(int)
        {
            Value temp;
            temp.x=x--;
            return temp;
        }    
};
int main()
{
    int a;
    Value v1,v2,v3;
    cout<<"Enter a number ==> ";
    cin>>a;
    v1.setData(a);
    v2=++v1;
    cout<<v2.getData()<<endl;
    v3=v1++;
    cout<<v3.getData()<<endl;
    return 0;
}