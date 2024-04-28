//5. Write a function to transform a string into lowercase.
#include<stdio.h>
int lwr_case(char a[]);
int main()
{
    char a[]="ESHETA";
    lwr_case(a);
}
int lwr_case(char a[])
{
    int i=0,count=0;
    while(a[i] != '\0')
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i]=a[i]+32;
            count++;
        }
        i++;
    }
    printf("%s",a);
    return 0;
}
/*OUTPUT-
esheta
*/