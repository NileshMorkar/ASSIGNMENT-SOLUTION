//Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.
#include<stdio.h>
#include<string.h>
int main()
{
    int n=5,i;
    char A[n][20],str[20];
    printf("Enter %d Email IDs\n",n);
    for(i=0;i<n;i++)
    {
        gets(A[i]);
        //fgets(A[i],20,stdin);
        //A[i][strlen(A[i])-1]='\0';
    }
    printf("\nOdd email IDs \n\n");
    for(i=0;i<n;i++)
    {
        if(strchr(A[i],'@')==0)
        {
            puts(A[i]);
        }
    }
    return 0;
}