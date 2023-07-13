//1.Write a program to find the Nth term of the Fibonnaci series.
//nth term=>1st n terms, say n=5 then 1st n terms are 0 1 1 2 3 
#include<stdio.h>
int main()
{
    int f1,f2,f3,count,n;
    printf("Enter the value of n- ");
    scanf("%d",&n);
    f1=0;
    f2=1;
    printf("%d %d ",f1,f2);
    count=3;
    f3=f1+f2;
    while(count<=n)
    {
        printf(" %d ",f3);
        f1=f2;
        f2=f3;
        f3=f1+f2;
        count++;
    }
    return 0;

}