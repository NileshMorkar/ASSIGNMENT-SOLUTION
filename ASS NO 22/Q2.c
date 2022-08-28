/*2. Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.
*/
#include<stdio.h>
#include<stdlib.h>
float average(int *ptr,int n);
int main()
{
    int i,n,*ptr;

    printf("Enter Size of array ==> ");
    scanf("%d",&n);
    
    ptr=(int *)malloc(n*sizeof(int));
    
    for(i=0;i<n;i++)
        scanf("%d",ptr+i);
    
    for(i=0;i<n;i++)
        printf("%d ",*(ptr+i));
    
    printf("\nAverage ==> %.2f ",average(ptr,n));
    
    return 0;
}
float average(int *ptr,int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+*(ptr+i);
    
    return sum/n;
}
