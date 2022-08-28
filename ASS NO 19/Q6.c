//Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,flag;
    char A[][20]={"nilesh","raj","Om","radar","raj","the","madam","mam","pari","noon"};
    printf("Palindrome String are ==>\n");
    for(i=0;i<10;i++)
    {
        flag=1;
        l=strlen(A[i]);
        for(j=0;j<l/2;j++)
        {
            if(A[i][j]!=A[i][l-j-1])
            {
                flag=0;
                break;
            }
        }
        if(flag)
            puts(A[i]);
    }
    return 0;
}