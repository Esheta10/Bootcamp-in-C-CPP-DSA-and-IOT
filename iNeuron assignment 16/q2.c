//2. Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int i,j,k,sum=0;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={9,8,7,6,5,4,3,2,1};
    int c[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                sum = sum + (a[i][k]*b[k][j]);
            }
            c[i][j]=sum;
            sum=0;//sum ko empty karenge next time use karne ke liye
        }
    }
    printf("Product of two matrices each of order 3x3 is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*OUTPUT-
Product of two matrices each of order 3x3 is:
30 24 18
84 69 54
138 114 90
*/