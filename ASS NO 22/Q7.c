//Write a program to demonstrate memory leak in C.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    ptr=NULL; //memory leak( 4 bytes)....
    return 0;
}