/*Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.
Output -*/
/*Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.
Output -*/
#include<iostream>
using namespace std;
class Matrix
{
    private:
        int A[3][3];
    public:
        void setData(int M[3][3])
        {
            int i,j;
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    A[i][j]=M[i][j];
                }
            }
        }
        void getData()
        {
            int i,j;
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    cout<<" "<<A[i][j]<<" ";
                }
                cout<<"\n";
            }
        }
        Matrix()
        {
            int i,j;
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    A[i][j]=0;
                }
            }
        }
        Matrix(Matrix &M)
        {
            int i,j;
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    A[i][j]=M.A[i][j];
                }
            }
        }
        Matrix operator-()
        {
            Matrix temp;
            int i,j;
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    temp.A[i][j]=-A[i][j];
                }
            }
            return temp;
        }
};

int main()
{
    Matrix m1,m2;
    int i,j,M[3][3];
    cout<<"Enter Matrix Element (3 X 3)\n\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>M[i][j];
        }
    }
    m1.setData(M);
    cout<<"Matrix is :\n";
    m1.getData();
    m1=-m1;
    cout<<"Matrix is :\n";
    m1.getData();
    return 0;
}