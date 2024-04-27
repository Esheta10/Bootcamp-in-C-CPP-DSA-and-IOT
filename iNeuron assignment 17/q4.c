//4. Write a program to convert a given string into uppercase.
#include<stdio.h>
int main()
{
    char a[]="esheta";
    int i=0,count=0;
    while(a[i] != '\0')
    {
        if(a[i] >= 'a' && a[i] <= 'z')
        {
            a[i]=a[i] - 32;
            count++;
        }
        i++;
    }
    printf("%s",a);
    return 0;
}
/*OUTPUT-
 ESHETA
 */