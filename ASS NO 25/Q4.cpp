/*Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.*/
#include<iostream>
using namespace std;
class LargestNumber
{
    int x,y,z;
    public:
    void set_value(int a,int b,int c)
    {
        x=a;y=b;z=c;
    }
    int large()
    {
        return x>y?(x>z?x:z):(y>z?y:z);
    }
    int small()
    {
        return x>y?(x>z?x:z):(y>z?y:z);
    }
};
int main()
{
    LargestNumber L1;
    int a,b,c;
    
    cout<<"Enter Three numbers ==> ";
    cin>>a>>b>>c;
    L1.set_value(a,b,c);
    
    cout<<"\nLargest no. ==> "<<L1.large();
    return 0;
}