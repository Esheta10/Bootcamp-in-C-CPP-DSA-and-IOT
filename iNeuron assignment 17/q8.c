//8. Write a program in C to copy one string to another string.
#include<stdio.h>
int main()
{
    char a[]="ESHETA";
    char b[]={};
    for(int i=0;a[i];i++)
    {
        b[i]=a[i];
    }
    printf("Copied string is %s",b);
}
/*OUTPUT-
Copied string is ESHETA
*/