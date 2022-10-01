/*Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.
*/
#include<iostream>
using namespace std;
class Box
{
    private:
        int l,b,h,vol;
    public:
        Box()
        {
            l=0;b=0;h=0;
        }
        void setData(int x,int y ,int z)
        {
            l=x;b=y;h=z;
        }
        void showData()
        {
            cout<<"length : "<<l;
            cout<<"\nBreadth : "<<l;
            cout<<"\nHeight : "<<h;
        }
        void cal_Volume()
        {
            vol= l*b*h;
        }
        int get_volume()
        {
            return vol;
        }
};
int main()
{
    int a,b,c;
    Box b1;
    b1.showData();
    cout<<"\nEnter length ,Breadth,Height ==> ";
    cin>>a>>b>>c;
    b1.setData(a,b,c);
    b1.cal_Volume();
    cout<<"\nVolume of Box ==> "<<b1.get_volume()<<" m^3";
    return 0;
}