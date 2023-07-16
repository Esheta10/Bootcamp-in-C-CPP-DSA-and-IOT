//8. 1
//  121
// 12321
//1234321
#include<stdio.h>
int main()
{
    int i,j,count=0;
    for(i=0;i<=3;i++)
    {
        count=0;
        for(j=0;j<(3-i);j++)
            printf(" ");
        for(j=0;j<=i;j++)
            printf("%d",++count);
            count--;
        while(count)
            printf("%d",count--);
        printf("\n");
    }
        
}