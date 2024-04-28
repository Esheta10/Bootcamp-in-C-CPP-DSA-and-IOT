//10. Write a function to find the repeated character in a given string.
#include<stdio.h>
#include<string.h>
int repeated_character(char a[]);
int main()
{
    char a[]="abcddabcefghabc";
    repeated_character(a);
}
int repeated_character(char a[])
{
    int freq[100]={0};
    int i=0;
    while(a[i] != '\0')
    {
        freq[a[i]]++;
        i++;
    }
    for(i=0;i<100;i++)
    {
        if(freq[i]>1)
            printf("%c --> %d\n",i,freq[i]);
    }
}
/*OUTPUT-
a --> 3
b --> 3
c --> 3
*/