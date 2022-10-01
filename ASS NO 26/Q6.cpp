/*Define a class student and write a program to enter student details using constructor
and define member function to display all the details.
*/
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
        char name[20];
        int roll_no,age;
    public:
        Student()
        {
            strcpy(name,"-");
            roll_no=0;
            age=0;
        }
        void setData(int Rn,char n[] ,int a)
        {
            roll_no=Rn;
            strcpy(name,n);
            age=a;
        }
        void getData()
        {
            cout<<"Roll No==> "<<roll_no;
            cout<<"\nName==>",puts(name);
            cout<<"Age==> "<<age<<endl;
        }

};
int main()
{
    Student s1,s2;
    int rollNo,age;
    char name[20];
    cout<<"Enter Your Roll no ==>";
    cin>>rollNo;
    cin.ignore();
    cout<<"Enter your name==>";
    cin.getline(name,20);
    cout<<"Enter Age==> ";
    cin>>age;
    s1.setData(rollNo,name,age);

    cout<<"\n\nFirst Student \n";
    s1.getData();
    cout<<"\n\nSecond Student \n";
    s2.getData();
    return 0;
}