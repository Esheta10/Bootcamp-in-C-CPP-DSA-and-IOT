//6. Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int  main()
{
    char a[]="Esheta";
    int i=0,j=strlen(a)-1;
    int temp;
    while(i<=j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;

        i++;
        j--;
    }
    printf("Reverse of given string is %s",a);
}
/*OUTPUT-
Reverse of given string is atehsE
*/