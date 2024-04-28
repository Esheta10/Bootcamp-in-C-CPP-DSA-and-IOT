//3. Write a function to compare two strings.
#include<stdio.h>
#include<string.h>
int compare(char a[],char b[]);
int main()
{
    char a[]="esheta";
    char b[]="esheta";

    compare(a,b);
}
int compare(char a[],char b[])
{
    int i,flag;
    int n=strlen(a)-1;
    for(int i=0;i<=n;i++)
    {
        if(a[i]==b[i])
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag == 1)
        printf("Both the strings are equal");
    else
        printf("Both the strings are not equal");
}
/*OUTPUT-
Both the strings are equal
*/