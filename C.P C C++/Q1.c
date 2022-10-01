#include<stdio.h>
int palindrome(int);
int reverse_num(int n);
int main()
{
    int num;
    printf("Enter a number ==> ");
    scanf("%d",&num);
    if(palindrome(num))
        printf("True");
    else
        printf("False");
    return 0;
}
int palindrome(int n)
{
    int k;
    k=reverse_num(n);
    if(k!=n || n<0)
        return 0;
    else
        return 1;
}
int reverse_num(int n)
{
    int k=0;
    for(;n;)
    {
        k=k*10+n%10;
        n/=10;
    }
    return k;
}