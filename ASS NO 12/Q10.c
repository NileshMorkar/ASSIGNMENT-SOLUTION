//Write a recursive function to print reverse of a given number.
#include<stdio.h>
void reverse(int);
int main()
{
    int num;
    printf("Enter no.\n");
    scanf("%d",&num);
    reverse(num);
    return 0;
}
void reverse(int n)
{
    if(n>0)
    {
        printf("%d",n%10);
        reverse(n/10);
    }
}