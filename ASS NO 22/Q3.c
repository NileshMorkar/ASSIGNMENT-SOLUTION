/*Write a program to calculate the sum of n numbers entered by the user using malloc
and free
*/
#include<stdio.h>
#include<stdlib.h>
int input_sum(int n);
int main()
{
    int i,*ptr,n,sum;
    printf("Enter Size of array\n");
    scanf("%d",&n);
    
    sum=input_sum(n);
    
    printf("Sum ==> %d \n",sum);
    return 0;
}
int input_sum(int n)
{
    int *p,i,sum=0;
    p=(int *)malloc(n*sizeof(int));
    printf("Enter %d Elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        sum=sum+*(p+i);
    }
    free(p);
    return sum;
}