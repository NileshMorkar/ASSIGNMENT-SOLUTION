/*Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object. Make
sure the names of formal arguments are the same as names of instance variables.
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int r,i;
    public:
        void setData(int r,int i)
        {
            (*this).r=r;
            (*this).i=i;
        }
        void getData()
        {
            cout<<r<<"+("<<i<<")i"<<endl;
        }
};
int main()
{
    Complex c1,c2;
    c1.setData(5,6);
    c1.getData();
    return 0;;
}