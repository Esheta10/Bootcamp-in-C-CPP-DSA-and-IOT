//9. Write a program that asks the user to enter a username. If the username entered is
//one of the names in the list then the user is allowed to calculate the factorial of a
//number. Otherwise, an error message is displayed.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int fact(int n);
int main()
{
    char a[5][10]={"Esheta","Divya","Sangjukta","Ashima","Ritocheta"};
    int i,n,flag=0;
    char username[10];

    for(i=0;i<1;i++)
    {
        printf("Enter a username: ");
        scanf("%s",username);
    }
    for(i=0;i<5;i++)
    {
        if(strcmp(a[i],username)==0)
        {
            flag=1;
            fact(n);
        }
    }
    if(flag==0)
        printf("Error");
}
int fact(int n)
{
    int f=1,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial of %d is %d",n,f);
}
/*OUTPUT-
Enter a username: Esheta
Enter a number: 5
Factorial of 5 is 120

Enter a username: Aastha
Error
*/