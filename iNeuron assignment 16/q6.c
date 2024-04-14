//6. Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum;
    printf("Enter array elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Sum of rows is:\n");
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
        printf("%d ",sum);
    }
    printf("\nSum of columns is:\n");
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[j][i];
        }
        printf("%d ",sum);
    }
}
/*OUTPUT-
Enter array elements:
1 2 3
4 5 6
7 8 9
Sum of rows is:
6 15 24
Sum of columns is:
12 15 18
*/
