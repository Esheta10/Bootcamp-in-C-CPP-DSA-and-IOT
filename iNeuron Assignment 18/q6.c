//6. Write a function to check whether a given string is an alphanumeric string or not.
//(Alphanumeric string must contain at least one alphabet and one digit)
#include<stdio.h>
int alphanumeric(char a[]);
int main()
{
    char a[]="Esheta10";
    alphanumeric(a);
}
int alphanumeric(char a[])
{
    int i=0,count_alpha=0,count_numeric=0;
    while(a[i] != '\0')
    {
        if((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
                    count_alpha++;
        if(a[i] >= '0' && a[i] <= '9')
                    count_numeric++;
        i++;
    }
    if(count_alpha>=1 && count_numeric>=1)
        printf("Given string is alphanumeric");
    else
        printf("Given string is not alphanumeric");
    return 0;
}
/*OUTPUT-
Given string is alphanumeric
*/