//5. Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[10][20];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter %d email-ids:",i+1);
        gets(a[i]);
    }
    for(i=0;i<3;i++)
    {
        if(strchr(a[i] ,'@') != 0)
        {
            printf("%s\n",a[i]);
        }
    }
}
/*OUTPUT-
Enter 1 email-ids:esheta@gmail.com
Enter 2 email-ids:jaiswal@gmail.com
Enter 3 email-ids:abcdgmail.com
esheta@gmail.com
jaiswal@gmail.com
*/