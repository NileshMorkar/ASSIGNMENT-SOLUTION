/*Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)
*/
#include<iostream>
using namespace std;
class Time
{
    private:
        int h,m,s;
    public:
        void setData(int x,int y,int z)
        {
            h=x;m=y;s=z;
        }
        void showTime()
        {
            cout<<h<<":"<<m<<":"<<s;
        }
        void normalize()
        {
            m=m+s/60;
            s=s%60;
        
            h=h+m/60;
            m=m%60;
        }
        Time add(Time T)
        {
            Time Sum;
            Sum.h=h+T.h;
            Sum.m=m+T.m;
            Sum.s=s+T.s;
            Sum.normalize();
            return Sum;
        }
};
int main()
{
    int a,b,c;
    Time T1,T2,T3;
    cout<<"Enter Time(hour,minute,second)==>";
    cin>>a>>b>>c;
    T1.setData(a,b,c);
    T1.normalize();
    T1.showTime();
    cout<<"\nEnter Time(hour,minute,second)==>";
    cin>>a>>b>>c;
    T2.setData(a,b,c);
    T2.normalize();
    T2.showTime();
    T3=T1.add(T2);
    T3.showTime();
    return 0;
}