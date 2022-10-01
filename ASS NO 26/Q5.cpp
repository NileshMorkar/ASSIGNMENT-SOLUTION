/*Define a class Date and write a program to Display Dateand initialise date object
using Constructors.
*/
#include<iostream>
using namespace std;
class Date
{
    private:
        int d,m,y;
    public:
        Date()
        {
            d=0;m=0;y=0;
        }
        void setData(int x,int y,int z)
        {
            d=x;m=y;y=z;
        }
        void getDate()
        {
            cout<<d<<"/"<<m<<"/"<<y;
        }
};
int main()
{
    Date d1;
    d1.getDate();
    return 0;
}