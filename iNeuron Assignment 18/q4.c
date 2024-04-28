//4. Write a function to transform string into uppercase.
#include<stdio.h>
int upr_case(char a[]);
int main()
{
    char a[]="esheta";
    upr_case(a);
}
int upr_case(char a[])
{
    int i=0,count=0;
    while(a[i] != '\0')
    {
        if(a[i] >= 'a' && a[i] <= 'z')
        {
            a[i]=a[i]-32;
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