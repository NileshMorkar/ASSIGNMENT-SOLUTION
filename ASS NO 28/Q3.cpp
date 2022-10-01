/*Overload subscript operator [] that will be useful when we want to check for an index
out of bound.
*/
#include<iostream>
using namespace std;
class Array
{
    private:
        int A[100]={0};
        const int size=100;
    public:
        void setArray(int num,int index)
        {
            if(index>size)
            {
                cout<<"Array Index Out of Bound Exception"<<endl;
                exit(0);
            }
            A[index]=num;
        }
        int operator[](int index)
        {
            if(index>size)
            {
                cout<<"Array Index Out of Bound Exception"<<endl;
                exit(1);
            }
            return A[index];
        }
};
int main()
{
    Array A1;
    A1.setArray(45,4);
    cout<<A1[4]<<endl<<A1[23];
    return 0;
}