//3. Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("Enter the elements of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose of given matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*OUTPUT-
Enter the elements of matrix:
1 2 3
4 5 6
7 8 9
Transpose of given matrix is:
1 4 7
2 5 8
3 6 9
*/
    
