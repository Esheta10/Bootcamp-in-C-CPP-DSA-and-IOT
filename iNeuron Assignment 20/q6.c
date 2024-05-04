//6. Write a program to calculate the length of the string using a pointer.
#include<stdio.h>
int main ()
{
    char str[100];
    char *p;
    p=str;//to point to the first character of the string

    printf("Enter the string:");
    fgets(str,100,stdin);
    
    int count=0;
    while(*p !='\0')
    {
        count++;
        p++;
    }
    printf("Length of the string is %d",count-1);//count-1 is done to exclude new-line character due to fgets function
}
/*OUTPUT-
Enter the string:good morning
Length of the string is 12
-------------------------------OR----------------------------------------------
for(int i=0;p[i] !='\0';i++)
        count++;
printf("Length of the string is %d",count-1);
*/
