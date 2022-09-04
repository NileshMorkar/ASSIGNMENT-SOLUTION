/*10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc
*/
#include<iostream>
using namespace std;
class Area
{
    public:
    int side,l,b,r;
    int square()
    {
        return (side*side);
    }
    int rectangle()
    {
        return l*b;
    }
    float circle()
    {
        return 3.14f*r*r;    
    }
};
int main()
{
    //int side,r,l,b;
    Area A;
    cout<<"\nEnter Side of Square ==> ";
    cin>>A.side;
    cout<<"\nsArea of Square ==> "<<A.square()<<endl;
    cout<<"\nEnter radius of Circle ==> ";
    cin>>A.r;
    cout<<"\nArea of Circle ==> "<<A.circle()<<endl;
    cout<<"\nEnter length and breadth of Rectangle ==> ";
    cin>>A.l>>A.b;
    cout<<"\nArea of Rectangle ==> "<<A.rectangle()<<endl;
    
    return 0;
}