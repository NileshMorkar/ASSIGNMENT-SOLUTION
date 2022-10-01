/*Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.
*/
#include<iostream>
using namespace std;
class Time
{
    private:
        int h,m,s;
    public:
        Time(int x=0,int y=0,int z=0)
        {
            h=x;m=y;s=z;
            Normalize_time();
        }
        void Normalize_time()
        {
            m=m+s/60;
            s=s%60;
            h=h+m/60;
            m=m%60;
        }
        int operator==(Time T)
        {
            if(T.h==h && T.m==m && T.s==s)
                return 1;
            return 0;
        }
        friend ostream& operator<<(ostream &os ,Time T);
        friend istream& operator>>(istream& os ,Time &T);
};
istream& operator >> (istream &os ,Time &T)
{
    cout<<"Hours   :";
    cin>>T.h;
    cout<<"minutes :";
    cin>>T.m;
    cout<<"seconds :";
    cin>>T.s;
    T.Normalize_time();
    return os;
}
ostream& operator << (ostream &os ,Time T)
{
    cout<<"Hours   :"<<T.h<<endl;
    cout<<"minutes :"<<T.m<<endl;
    cout<<"seconds :"<<T.s<<endl;
    return os;
}

int main()
{
    Time t1,t2,t3;
    //cout<<t3;
    cout<<"Enter First Time \n---------------------\n";
    cin>>t1;
    cout<<"First Time\n";
    cout<<t1;
    cout<<"Enter Second Time \n---------------------\n";
    cin>>t2;
    cout<<"Second Time\n";
    cout<<t2;
    if(t1==t2)
        cout<<"\n\nTimes are Same\n";
    else
        cout<<"\n\nTimes are not Same\n";
    return 0;
}