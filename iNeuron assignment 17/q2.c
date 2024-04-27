//2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main()
{
    char a[]="eshetajaiswal";
    char b='a';
    int i=0,count=0;
    while(a[i] != '\0')
    {
        if(a[i] == b)
        {
             count++;
        }
        i++;
    }
    printf("Occurrence of the given character in a given string is %d",count);
    return 0;
}
/*OUTPUT-
Occurrence of the given character in a given string is 3
*/