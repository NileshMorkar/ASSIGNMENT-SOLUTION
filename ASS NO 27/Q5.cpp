/*5. Consider following class Numbers
class Numbers
{
int x,y,z;
public:
// methods
};
Overload the operator unary minus (-) to negate the numbers.*/
#include<iostream>
using namespace std;
class Numbers
{
    private:
        int x,y,z;
    public:
        void setData(int a,int b,int c)
        {
            x=a;y=b;z=c;
        }
        void showData()
        {
            cout<<"x=="<<x<<"\ny=="<<y<<"\nz=="<<z<<endl;
        }
        Numbers operator-()
        {
            Numbers temp;
            temp.x=-x;
            temp.y=-y;
            temp.z=-z;
            return temp;
        }
};
int main()
{
    int a,b,c;
    Numbers n1,n2;
    cout<<"Enter Three numbers ==> ";
    cin>>a>>b>>c;
    n1.setData(a,b,c);
    cout<<"For n1\n";
    n1.showData();
    n2=-n1;
    cout<<"For n2\n";
    n2.showData();
    return 0;
}