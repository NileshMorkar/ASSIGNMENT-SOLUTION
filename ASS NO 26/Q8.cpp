/*Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.
*/
#include<iostream>
using namespace std;
class Bank
{
    private:
        int principal;
        float year;
        static float roi;
    public:
        Bank()
        {
            principal=0;
            year=0;
        }
        void setData(int p ,int y)
        {
            principal=p;
            year=y;
        }
        void getData()
        {
            cout<<"\nPrincipal ==>"<<principal;
            cout<<"\nYear==>"<<year;
            cout<<"\nROI==>"<<roi;
        }
        float get_SI()
        {
            return principal*year*roi;
        }
        void set_roi(float x)
        {
            roi=x;
        }
        int get_roi()
        {
            return roi;
        }
};
float Bank ::roi=0.08;
int main()
{
    int amount;
    float year,SI;
    Bank b1;
    //b1.set_roi(0.06);
    cout<<"Enter Amount==>";
    cin>>amount;
    cout<<"Enter No of Years==>";
    cin>>year;
    b1.setData(amount,year);
    b1.getData();
    SI=b1.get_SI();
    cout<<"\nSimple Interest==> "<<SI;
    return 0;
}