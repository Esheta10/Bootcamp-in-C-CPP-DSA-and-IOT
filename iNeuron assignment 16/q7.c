//7. Write a program in C to print or display the lower triangular of a given matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
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
            if(j>i)
                a[i][j]=0;
        }
    }
     printf("Lower Triangular matrix is:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
/*OUTPUT-
Enter array elements:
1 2 3
4 5 6
7 8 9
Lower Triangular matrix is:
1 0 0
4 5 0
7 8 9
*/