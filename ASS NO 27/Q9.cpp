/*Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).
*/
#include<iostream>
#include<string.h>
using namespace std;
class MyString
{
    private:
        char str[100];
    public:
        void setData(char A[])
        {
            strcpy(str,A);
        }
        void getData()
        {
            cout<<str<<endl;
        }
        void operator!()
        {
            int i;
            for(i=0;str[i];i++)
            {
                if(str[i]>='A' && str[i]<='Z')
                    str[i]=str[i]+32;
                else
                    str[i]=str[i]-32;
            }
        }
};

int main()
{
    char S[100];
    MyString s1,s2;
    cout<<"Enter String :\n";
    cin.getline(S,100);
    s1.setData(S);
    cout<<"String is :\n";
    s1.getData();
    s1.operator!();
    cout<<"String is :\n";
    s1.getData();
    return 0;
}