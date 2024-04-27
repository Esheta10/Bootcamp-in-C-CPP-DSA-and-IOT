//9. Write a C program to sort a string array in ascending order.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="esheta";
    char temp;
    int n=strlen(a);//to get length of the string
    for(int i=0;i<=n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
        }
    }
    printf("After sorting,string is %s",a);
    return 0;
}
/*OUTPUT-
After sorting,string is aeehst
*/