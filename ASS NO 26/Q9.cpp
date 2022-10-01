/*Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit*/
#include<iostream>
#include<string.h>
using namespace std;
class Bill
{
    private:
        char name[20];
        int unit;
        float total;
    public:
        Bill()
        {
            strcpy(name,"--");
            unit=0;
            total=0;
        }
        void setData(char A[],int n)
        {
            strcpy(name,A);
            unit=n;
        }
        void showData()
        {
            cout<<"\nName: "<<name;
            cout<<"\nUnit : "<<unit;
            cout<<"\nTotal Bill: "<<total;
        }
        int getBill()
        {
            return total;
        }
        void calculateBill();
};
void Bill::calculateBill()
{
    if(unit<=100)
    {
        total=(100-unit)*1.20;
    }
    else if(unit<=200)
    {
        total=(unit-100)*2+120;
    }
    else
    {
        total=(unit-200)*3+320;
    }
}
        
int main()
{
    Bill b1;
    int k;
    char A[20];
    cout<<"Enter Your name : ";
    cin.getline(A,20);
    cout<<"Enter Total Units : ";
    cin>>k;
    b1.setData(A,k);
    b1.calculateBill();
    b1.showData();
    return 0;
}