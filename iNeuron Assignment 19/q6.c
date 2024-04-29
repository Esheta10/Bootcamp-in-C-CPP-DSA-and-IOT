//6. Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
#include<string.h>
int is_palindrome(char a[]);
int main()
{
    char a[10][20];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter string %d: ",i+1);
        gets(a[i]);
    }
    printf("Palindrome from the list are:\n");
    for(i=0;i<3;i++)
    {
        if(is_palindrome(a[i]))
            printf("%s\n",a[i]);
    }
}
int is_palindrome(char a[])
{
    int i,j=strlen(a)-1;
        for(i=0;i<3;i++)
        {
            while(i<=j)
            {
                if(a[i] != a[j])
                {
                   return 0;
                }   
                else
                {
                    i++;
                    j--;
                }
            }
        }
        return 1;
}
/*OUTPUT-
Enter string 1: madam
Enter string 2: civic
Enter string 3: hello
Palindrome from the list are:
madam
civic
*/