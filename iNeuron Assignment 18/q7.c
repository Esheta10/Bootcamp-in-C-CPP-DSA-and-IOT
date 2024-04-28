//7. Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
int palindrome(char a[]);
int main()
{
    char a[]="malayalam";
    palindrome(a);
    return 0;
}
int palindrome(char a[])
{
    int i=0,j=strlen(a)-1;
    while(i<=j)
    {
        if(a[i] != a[j])
        {
                break;
        }
        else
        {
            i++;
            j--;
        }
    }
    if(i>j)
        printf("Palindrome");
    else
        printf("Not palindrome");}
/*OUTPUT-
Palindrome
*/
