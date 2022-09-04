/*Define a class Circle and define an instance member function to find the area of the
circle.*/
/*10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc
*/
#include<iostream>
using namespace std;
class Area
{
    int r;
    public:
    void set_value(int x)
    {
        if(x<0)
            x=-x;
        r=x;
    }
    float circle()
    {
        return 3.14f*r*r;    
    }
};
int main()
{
    int r;
    Area A;
    cout<<"\nEnter radius of Circle ==> ";
    cin>>r;
    A.set_value(r);
    cout<<"\nArea of Circle ==> "<<A.circle()<<endl;   
    return 0;
}