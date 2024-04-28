//1. Write a function to calculate length of the string.
#include<stdio.h>
int strlen(char a[]);
int main()
{
    char a[]="esheta";
    printf("Length of the string is %d",strlen(a));
}
int strlen(char a[])
{
    int i=0,count=0;
    while(a[i] != '\0')
    {
        count++;
        i++;
    }
    return i;
}
/*OUTPUT-
Length of the string is 6
*/