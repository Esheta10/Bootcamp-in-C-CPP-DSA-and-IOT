//10.1234321
//   123 321
//   12   21
//   1     1
#include<stdio.h>
int main()
{
    int i,j,count=0;
    for(i=0;i<=3;i++)
    {
        count=0;
        for(j=0;j<=(3-i);j++)
            printf("%d",++count);
        for(j=0;j<2*i-1;j++)
            printf(" ");
        if(i==0)
            count--;
        while(count)
            printf("%d",count--);
        printf("\n");
    }
}