//Write a program to input and print text using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0,j=1;
    char c,*ptr;
    printf("ENter Name :- ");
    ptr=(char*)malloc(sizeof(char));
    while (c!='\n')
    {
        c=getc(stdin);
        j++;
        ptr=(char*)realloc(ptr,j*sizeof(char));
        ptr[i]=c;
        i++;
    }
    ptr[i-1]='\0';
    puts(ptr);
    return 0;
}