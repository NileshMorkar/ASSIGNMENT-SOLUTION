/*Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.
*/
#include<iostream>
using namespace std;
class Time
{
    private:
        int hr,min,sec;
    public:
        void input()
        {
            cout<<"Enter Time in hr:min:sec format ==> ";
            cin>>hr>>min>>sec;
            if(hr<0)
                hr=-hr;
            if(min<0)
                min=-min;
            if(sec<0)
                sec=-sec;
        }
        void display()
        {
            cout<<"\nTime ==> "<<hr<<":"<<min<<":"<<sec;
        }
};

int main()
{
    Time t;
    t.input();
    t.display();
    return 0;
}