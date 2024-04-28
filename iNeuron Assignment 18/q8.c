//8. Write a function to count words in a given string.
#include<stdio.h>
int count_words(char a[]);
int main()
{
    char a[]="The weather is beautiful";
    count_words(a);
    return 0;
}
int count_words(char a[])
{
    int i=0,count=1;
    while(a[i] != '\0')
    {
        if(a[i] == ' ' && a[i+1]!= ' ')
        {
            count++;
        }
        i++;
    }
    printf("The no. of words in the given string is %d",count);
}
/*OUTPUT-
The no. of words in the given string is 4
*/