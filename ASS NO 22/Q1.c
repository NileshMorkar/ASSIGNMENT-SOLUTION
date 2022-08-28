/*Define a function to input variable length string and store it in an array without
memory wastage.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{   
    int i=0,j=1;
    char c,*str;
    str=(char*)malloc(sizeof(char));
    printf("Enter String ==> ");
    while(c!='\n')
    {
        c=getc(stdin);
        j++;
        str=(char*)realloc(str,j*sizeof(char));
        str[i]=c;
        i++;
    }
    str[i-1]='\0';
    puts(str);
    printf("%d",strlen(str));
    return 0;
}
