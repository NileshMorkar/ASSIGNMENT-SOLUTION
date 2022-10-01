/*Create a Distance class having 2 instance variable feet and inches. Also create
default constructor and parameterized constructor takes 2 variables . Now overload ()
function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
inches = a+b + 15.
*/
#include<iostream>
using namespace std;
class Distance
{
    private:
        int feet,inch;
    public:
        void getData()
        {
            cout<<"Feet : "<<feet<<endl;
            cout<<"Inch : "<<inch<<endl;
        }
        Distance(int f=0,int i=0)
        {
            feet=f;inch=i;
        }
        Distance operator()(int a,int b,int c)
        {
            feet=a+c+5;
            inch=a+b+15;
            return *this;
        }
};
int main()
{
    Distance f1,f2;
    f2=f1(21,25,63);
    f1.getData();
    f2.getData();
    return 0;
}