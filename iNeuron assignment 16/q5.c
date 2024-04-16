//5. Write a program in C to find the sum of left diagonals of a matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter the elements of matrix:\n");
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
            if(i+j==2)  //(i+j == n-1) 02 11 20
            {
                sum = sum + a[i][j];
            }
        }
    }
    printf("The sum of left diagonals of a matrix is %d ",sum);
}
/*OUTPUT-
Enter the elements of matrix:
9 8 7
6 5 4
3 2 1
The sum of left diagonals of a matrix is 15 
*/
