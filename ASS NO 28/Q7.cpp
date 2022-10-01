//Create an Integer class and overload logical not operator for that class.
#include<iostream>
using namespace std;
class Integer
{
    private:
        int x;
    public:
        friend istream & operator >>(istream &,Integer &);
        friend ostream & operator <<(ostream &,Integer);
        int operator !()
        {
            if(x>0)
                return 1;
            else 
                return 0;
        }
};
istream & operator >>(istream & cin,Integer & I)
{
    cin>>I.x;
    return cin;
}
ostream & operator <<(ostream & cout,Integer I)
{
    cout<<I.x;
    return cout;
}
int main()
{
    Integer i1;
    cin>>i1;
    
    cout<<i1<<endl;

    cout<<!i1;
    return 0;
}
