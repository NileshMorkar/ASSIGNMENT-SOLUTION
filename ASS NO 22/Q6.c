//Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i,max;
    
    printf("Enter Size of Array \n");
    scanf("%d",&n);
    
    p=(int *)calloc(n,sizeof(int));
    
    for(i=0;i<n;i++)
        scanf("%d",(p+i));
    
    max=p[0];
    
    for(i=1;i<n;i++)
        if(p[i]>max)
            max=p[i];
    
    printf("Greatest element ==> %d .\n",max);

    return 0;
}
