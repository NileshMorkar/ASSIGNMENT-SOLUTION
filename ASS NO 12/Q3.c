//Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void odd(int);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    odd(2*num);
    return 0;
}
void odd(int n)
{
    if(n>0)
    {
        odd(n-1);
        
        if(n%2)
            printf("%d ",n);
    }
}