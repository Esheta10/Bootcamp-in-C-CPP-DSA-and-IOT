//7.Write a program to print all Prime numbers between two given numbers.
#include<stdio.h>
int main()
{
    int min,max,i,j,count;
    printf("Enter the value of min and max- ");
    scanf("%d %d",&min,&max);
    for(i=min;i<=max;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==2)
            printf("%d ",i);
    }
    return 0;
}