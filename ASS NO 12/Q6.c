//Write a recursive function to print first N even natural numbers in reverse order.

#include<stdio.h>
void even(int n);
int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d",&num);
    even(2*num);
    return 0;
}
void even(int n)
{
    if(n>1)
    {
        printf("%d ",n);
        even(n-2);
    }
}