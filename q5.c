//q5.WAP to calculate the length of String using printf function.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter the string ");
    gets(str);
    printf("length of string is %d",strlen(str));
    return 0;
}