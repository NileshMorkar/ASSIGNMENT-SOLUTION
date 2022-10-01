#include<iostream>
using namespace std;
int main()
{
    int n,i,j,mult=1;
    cin>>n;
    int A[n],Ans[n];
    for(i=0;i<n;i++)
        cin>>A[i];
    for(i=0,j=0;j<n;i++)
    {
        if(i!=j)
            mult*=A[i];
        if(i==n-1)
        {
            Ans[j]=mult;
            i=-1;
            j++;
            mult=1;
        }   
    }
    for(i=0;i<n;i++)
        cout<<Ans[i]<<" ";
    return 0;
}