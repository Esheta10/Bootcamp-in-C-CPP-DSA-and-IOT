//10. Write a function to find the repeated character in a given string.
#include<stdio.h>
#include<string.h>
int repeated_character(char a[]);
int main()
{
    char a[]="abcddabcefghabchhhh";
    repeated_character(a);
}
int repeated_character(char a[])
{
    int freq[150]={0}; //since all ASCII characters get covered under 150 range
    int i=0;
    while(a[i] != '\0')
    {
        freq[a[i]]++;//a[i] index mein rakhi value ko increment karna hai frequency array mein
        i++;
    }
    for(i=0;i<150;i++)//frequency array
    {
        if(freq[i]>1)//sirf unhi frequencies ko print karna hai jo repeated hai
            printf("%c --> %d\n",i,freq[i]);//to print only the characters that are repeated.
            //i is the ASCII value of the character being printed.
            //freq[i] is the frequency of the character stored in the freq array at index i
    }
}
/*OUTPUT-
a --> 3
b --> 3
c --> 3
d --> 2
h --> 5
*/
