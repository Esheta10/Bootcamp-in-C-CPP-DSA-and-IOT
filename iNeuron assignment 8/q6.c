//6.*********
//   *******
//    *****
//     ***
//      *
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<9;j++)
        {
            if((i<=j)&&(8-i>=j))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}