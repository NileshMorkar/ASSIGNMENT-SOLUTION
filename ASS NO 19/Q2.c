//Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>
void sort_city(char A[5][15]);
int main()
{
    int i;
    char A[5][15];
    for(i=0;i<5;i++)
    {
        //gets(A[i]);
        fgets(A[i],15,stdin);
        A[i][strlen(A[i])-1]='\0';
    }
    sort_city(A);
    printf("\n");

    for(i=0;i<5;i++)
        puts(A[i]);
    
    return 0;
}
void sort_city(char A[5][15])
{
    int i,j,flag;
    char k[15];
    for(i=1;i<5;i++)
    {
        flag=1;
        for(j=0;j<5-i;j++)
        {
            if(strcmp(A[j],A[j+1])>0)
            {
                strcpy(k,A[j]);
                strcpy(A[j],A[j+1]);
                strcpy(A[j+1],k);
                flag=0;
            }
        }
        if(flag)
            break;
    }
}