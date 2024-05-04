//10. Write a program to print a string in reverse using a pointer
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char *p;
    p=str;

    printf("Enter a string:");
    fgets(str,100,stdin);

    int n= strlen(str)-1;
    
    if(n>0 && str[n-1]=='\n')
        str[n-1]='\0';

    for(int i=n-1;i>=0;i--)
        printf("%c",p[i]);
    return 0;
}
/*OUTPUT-
Enter a string:Esheta Jaiswal
lawsiaJ atehsE
*/