/*Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).
*/
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
                    cout<<" "<<A[i][j]<<"  ";
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
        friend Matrix operator+(Matrix,Matrix);
};
Matrix operator+(Matrix A, Matrix B)
{
    Matrix C;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            C.A[i][j]=A.A[i][j]+B.A[i][j];
        }
    }
    return C;
}
int main()
{
    Matrix m1,m2,m3;
    int i,j,A[3][3];
    cout<<"Enter matrix Element (3X3)\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
    }
    m1.setData(A);
    cout<<"Enter matrix Element (3X3)\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
    }
    m2.setData(A);
    cout<<"First Matrix :\n";
    m1.getData();
    cout<<"Second Mattrix :\n";
    m2.getData();
    m3=m1+m2;
    cout<<"Matrix SUM :\n";
    m3.getData();
    return 0;
}