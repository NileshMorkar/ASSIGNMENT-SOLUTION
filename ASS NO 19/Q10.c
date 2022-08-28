//Create an authentication system. It should be menu driven

#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char name[20],password[15],A[][2][20]={{"Nilesh","123"},{"Mayur","456"},{"Pari","789"},{"Karthik","159"},{"Raj","Sinnar@123"}};
    printf("Enter Username ==> ");
    gets(name);
    printf("Enter Password ==> ");
    gets(password);
    for(i=0;i<5;i++)
    {
        if(strcmp(name,A[i][0])==0 && strcmp(password,A[i][1])==0)
        {
            printf("\nAuthentication Successfull\n");
            break;
        }
    }
    if(i==5)
        printf("\nSorry...!! Authentication UNsuccessfull\n");
    
    return 0;
}