/*Create a Coordinate class for 3 variables x,y and z and overload comma operator
such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
c3 are objects of 3D coordinate class.
*/
#include<iostream>
using namespace std;
class Co_ord
{
    private:
        int x,y,z;
    public:
        Co_ord(int a=0,int b=0,int c=0)
        {
            x=a;y=b;z=c;
        }
        void setData(int a=0,int b=0,int c=0)
        {
            x=a;y=b;z=c;
        }
        void getData()
        {
            cout<<"X:"<<x<<"\nY:"<<y<<"\nZ:"<<z<<endl;
        }
        Co_ord operator ,(Co_ord C)
        {
            Co_ord temp;
            temp.x=C.x;
            temp.y=C.y;
            temp.z=C.z;
            return temp;
        }
};
int main()
{
    Co_ord c3,c1(4,5,6),c2(7,8,9);
    c3=(c1,c2);
    c3.getData();
    c1.getData();
    c2.getData();
    return 0;
}