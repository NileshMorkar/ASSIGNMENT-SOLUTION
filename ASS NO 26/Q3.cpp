/*Define a class Cube and calculate Volume of Cube and initialise it using constructor.
*/
#include<iostream>
using namespace std;
class Cube
{
    private:
        int side;
    public:
        Cube(int x)
        {
            side=x;
        }
        Cube()                      //Default Constructor
        {
            side=0;
        }
        Cube(Cube &C)               //copy Constructor
        {
            C.side=side;
        }
        void setData(int s)
        {
            side=s;
        }
        int getData()
        {
            return side;
        }
        int getVolume()
        {
            return side*side*side;
        }
};
int main()
{
    int s;
    Cube C;
    cout<<"Enter Side of Cube ==>";
    cin>>s;
    //C.setData(s);
    cout<<"Volume of Cube ==>"<<C.getVolume();
    return 0;
}