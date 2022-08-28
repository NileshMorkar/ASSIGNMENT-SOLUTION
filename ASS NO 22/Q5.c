/*Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,size,*ptr,sum=0;
    printf("Enter Size of Array\n");
    scanf("%d",&size);
    ptr=calloc(size,sizeof(int));
    for(i=0;i<size;i++)
        scanf("%d",(ptr+i));
        
    for(i=0;i<size;i++)
        sum=sum+*(ptr+i);

    printf("Sum of All Array Elements ==> %d .",sum);
    return 0;
}