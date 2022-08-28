/*Find out the maximum and minimum from an array using dynamic memory allocation
in C.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i,max,min;
    
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

    min=p[0];
    for(i=1;i<n;i++)
        if(p[i]<min)
            min=p[i];
    
    printf("Smallest element ==> %d .\n",min);

    return 0;
}