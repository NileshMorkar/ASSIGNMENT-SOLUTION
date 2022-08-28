//4. Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    int n=5,i;
    char A[n][20],str[20];
    printf("Enter %d Strings\n",n);
    for(i=0;i<n;i++)
    {
        gets(A[i]);
        //fgets(A[i],20,stdin);
        //A[i][strlen(A[i])-1]='\0';
    }
    printf("Enter string you want search\n");
    gets(str);
    for(i=0;i<n;i++)
    {
        if(strcmp(A[i],str)==0)
        {
            printf("\nString is Found at %d position\n",i+1);
        }
    }
    return 0;
}