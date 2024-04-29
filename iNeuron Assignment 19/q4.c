//4. Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[3][10];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter %d string: ",i+1);
        gets(a[i]);
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        if(strcmp(a[i], "esheta") == 0)
        {
            printf("String found");
            break;
        }
    }
    return 0;
}