//9. Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main()
{
    int x,i,n;
    printf("Enter the value of n- ");
    scanf("%d",&n);
    printf("cubes of the first %d natural numbers are ",n);
    for(i=1;i<=n;i++)
    {
        x=i*i*i;
        printf("%d ",x);
    }
    return 0;
}