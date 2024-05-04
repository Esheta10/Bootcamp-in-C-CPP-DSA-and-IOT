//1. Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h>
int swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before swapping,numbers are: %d %d\n",a,b);
    swap(&a,&b);
    printf("After swapping,numbers are: %d %d",a,b);
    return 0;
}
int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
/*OUTPUT-
Enter two numbers: 100 200
Before swapping,numbers are: 100 200
After swapping,numbers are: 200 100
*/