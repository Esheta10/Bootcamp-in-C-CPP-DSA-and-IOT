//4. Write a program in C to find the sum of right diagonals of a matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter the array elements:\n");
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
            if(i==j)    //00 11 22 
            sum = sum + a[i][j];
        }
    }
    printf("The sum of right diagonals of the matrix is %d",sum);
}
/*OUTPUT-
Enter the array elements:
1 2 3
4 5 6
7 8 9
The sum of right diagonals of the matrix is 15
*/
