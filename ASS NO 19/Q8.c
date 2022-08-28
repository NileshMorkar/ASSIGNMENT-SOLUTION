/*Given a list of words followed by two words, 
the task is to find the minimum distance between 
the given two words in the list of words. 
(Example:s={“the”,”quick”,”brown”,”fox”,”quick”} 
word1 = “the”, word2 = “fox”, OUTPUT : 1 )
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,temp,w1=-1,w2=-1,dis=10000;
    char word1[20],word2[20],A[10][20]={"nilesh","raj","Om","rohan","raj","the","quick","brown","fox","quick"};
    printf("Enter Two Words ==>\n");
    gets(word1);
    gets(word2);
    for(i=0;i<10;i++)
    {
        if(strcmp(word1,A[i])==0)
            w1=i;
        if(strcmp(word2,A[i])==0)
            w2=i;
        if(w1!=-1 && w2!=-1)
        {    
            temp=abs(w1-w2);
            if(temp<dis)
                dis=temp;
        }
    }
    printf("\n%d\n",dis-1);
    return 0;
}