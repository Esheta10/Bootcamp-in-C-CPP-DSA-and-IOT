//10.Write a program to print all Armstrong numbers under 1000.
#include<stdio.h>
#include<math.h>
int main()
{
    int i,r,n,temp,count,sum,armstrong;
    printf("All Armstrong numbers under 1000 are- ");
    for(i=1;i<=1000;i++)
    {
        n=i;
        temp=n;
        armstrong=n;
        count=0;
        sum=0;
        while(temp>0)
        {
            temp=temp/10;
            count++;
        }
        while(n>0)
        {
            r=n%10;
            sum=sum+pow(r,count);
            n=n/10;
        }
        if(armstrong==sum)
            printf("%d ",sum);
    }
    return 0;
}