//5. Write a function to transform a string into lowercase.
#include<stdio.h>
int main()
{
    char a[]="ESHETA";
    int i=0,count=0;
    while(a[i] !='\0')
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i]=a[i]+32;
            count++;
        }
        i++;
    }
    printf("%s",a);
}
/*OUTPUT-
esheta
*/