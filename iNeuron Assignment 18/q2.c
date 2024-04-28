//Write a function to reverse a string.
#include<stdio.h>
#include<string.h>
char reverse(char a[]);
int main()
{
    char a[]="esheta";
    reverse(a);
    return 0;
}
char reverse(char a[])
{
    int i=0,j=strlen(a)-1;
    char temp;
    while(i<=j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;

        i++;
        j--;
    }
    printf("Reversed string is %s",a);
}
/*OUTPUT-
Reversed string is atehse
*/
