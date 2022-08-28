/*9. Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*ptr;
    printf("Enter Size in Bytes For INT (Data Type) ==> ");
    scanf("%d",&n);
    if(n%4)
        printf("Sorry...! Memory allocation is failed\n");
    else
    {
        ptr=(int *)malloc(n);
        printf("Memory allocation is Successful\n");
    }
    return 0;
}