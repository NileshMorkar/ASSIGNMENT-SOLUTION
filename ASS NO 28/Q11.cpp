/*Create a class Marks that have one member variable marks and one member
function that will print marks. We know that we can access member functions using
(.) dot operator. Now you need to overload (->) arrow operator to access that
function.*/
#include<iostream>
using namespace std;
class Marks
{
    private:
        int marks;
    public:
        Marks(int m=0)
        {
            marks=m;
        }
        void setData(int m)
        {
            marks=m;
        }
        void getData()
        {
            cout<<"Marks : "<<marks<<endl;
        }
        Marks* operator ->()
        {
            return this;
        }
};
int main()
{
    Marks m1;
    m1->setData(63);
    m1->getData();

    return 0;
}
