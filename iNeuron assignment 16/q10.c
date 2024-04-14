//10. Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>
int main()
{
    int a[3][3],i,j,index,sum=0,max=0;
    printf("Enter array elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==1)
                sum=sum+a[i][j];
        }
        if(sum>max)
        {
            max=sum;
            index=i;
        }
    }
    printf("The row with maximum number of 1s:%d",index);
}
/*OUTPUT-
Enter array elements:
1 0 2
1 1 4
1 1 1
The row with maximum number of 1s:2
*/