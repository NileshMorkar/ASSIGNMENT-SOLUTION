//From the list of IP addresses, check whether all ip addresses are valid.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,x,flag,k;
    char *a,A[5][50];
    printf("Enter 5 IP Address\n");
    for(i=0;i<5;i++)
        gets(A[i]);
    printf("\nValid IP Address\n");
    for(i=0;i<5;i++)
    {
        flag=0;k=-1;
        a=strtok(A[i],".");
        while(a)
        {
            k++;
            x=atoi(a);
            if(x>=0 && x<=255)
            {
                flag++;
            }
            a=strtok(NULL,".");
        }
        x=atoi(A[i]);
        if(flag==4 && k==3)
            printf("%d ",x);
    }
    return 0;
}