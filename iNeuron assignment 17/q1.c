//1. Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main()
{
    char a[]="Esheta";
    int i=0,count=0;
    while(a[i] !='\0')
    {
        i++;
        count++;
    }
    printf("Length of the string is %d",count);
    return 0;
}
/*OUTPUT-
Length of the string is 6
*/