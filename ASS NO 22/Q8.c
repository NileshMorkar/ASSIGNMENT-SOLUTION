//Write a program to demonstrate dangling pointers in C.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    
    ptr=(int *)malloc(sizeof(int));
    free(ptr);//ptr becomes dangling pointer...
    *ptr=5;// illegal use pointer...
    
    return 0;
}