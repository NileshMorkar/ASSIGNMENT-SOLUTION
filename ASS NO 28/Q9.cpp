/*Create an Integer class that contains int x as an instance variable and overload
casting int() operator that will type cast your Integer class object to int data type.
*/
#include<iostream>
using namespace std;
class Integer
{
    private:
        int x;
    public:
        Integer(int a=0)
        {
            x=a;
        }
        operator int()
        {
            return x;    
        }

        friend istream & operator >>(istream &,Integer &);
        friend ostream & operator <<(ostream &,Integer &);
};
istream & operator >>(istream & cin,Integer & I)
{
    cin>>I.x;
    return cin;
}
ostream & operator <<(ostream & cout,Integer &I)
{
    cout<<I.x;
    return cout;
}
int main()
{
    int a;
    Integer i1=5;
    a=i1;
    cout<<a;
    return 0;
}