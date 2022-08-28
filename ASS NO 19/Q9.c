/*9. Write a program that asks the user to enter a username. 
If the username entered is one of the names in the list then 
the user is allowed to calculate the factorial of a number. 
Otherwise, an error message is displayed
*/
#include<stdio.h>
#include<string.h>
void factorial();
int main()
{
    int i;
    char name[20],A[][20]={"Nilesh","Morkar","Suraj","Raj","Om","Rohan","Rohit","Ramu"};
    printf("ENter Your name ==> ");
    gets(name);
    for(i=0;i<8;i++)
    {
        if(strcmp(name,A[i])==0)
        {    
            factorial();
            break;
        }
        
    }
    if(i==8)
        printf("\nError......!!!!\n");
    return 0;
}
void factorial()
{
    long int fact=1;    
    int n,i;
    printf("\nEnter a number==> ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
            fact=fact*i;
    printf("\n%d! ==> %d ",n,fact);
}