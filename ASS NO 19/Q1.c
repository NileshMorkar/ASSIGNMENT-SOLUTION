/*1. Write a program to find the number of vowels in each of the 5 strings 
stored in two dimensional arrays, taken from the user.
*/
#include<stdio.h>
#include<string.h>
void no_of_vowels(char []);
int main()
{
    int i;
    char A[5][20];
    for(i=0;i<5;i++)
        fgets(A[i],20,stdin);
    for(i=0;i<5;i++)
        no_of_vowels(A[i]);
    return 0;
}
void no_of_vowels(char str[])
{
    int i,k=0;
    i=strlen(str)-1;
    str[i]='\0';
    for(i=0;str[i];i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            k++;
        else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            k++;
        }
    }
    printf("%s ==> %d vowels\n",str,k);
}
