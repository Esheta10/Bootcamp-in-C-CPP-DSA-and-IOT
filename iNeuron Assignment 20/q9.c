//9. Write a program to print the elements of an array in reverse order.
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int *p;
    p=a;

    for(int i=9;i>=0;i--)
    {
        printf("%d ",p[i]);
    }
    return 0;
}
/*OUTPUT-
10 9 8 7 6 5 4 3 2 1 
*/