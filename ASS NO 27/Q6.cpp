/*Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.
*/
#include<iostream>
#include<string.h>
using namespace std;
class CString
{
    private:
        char s1[40];
    public:
        void setData(char A[])
        {
            strcpy(s1,A);
        }
        void showData()
        {
            cout<<s1<<endl;
        }
        CString operator+(CString C)
        {
            CString temp;
            strcpy(temp.s1,strcat(s1,C.s1));
            return temp;
        }
        int operator==(CString C)
        {
            return strcmp(s1,C.s1);
        }
};
int main()
{
    char A[20],B[20];
    CString c1,c2,c3;
    
    cout<<"Enter 1st String\n";
    cin.getline(A,20);
    cout<<"Enter 2nd String\n";
    cin.getline(B,20);
    
    c1.setData(A);
    c2.setData(B);
    c3=c1+c2;
    c3.showData();
    
    cout<<(c1==c2);

    return 0;
}