//8. Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int *p;
    p=a;
    int sum=0;
    for(int i=0;i<10;i++)
    {
        sum=sum+p[i];//sum=sum + *(p+i)
    }
    printf("Sum=%d",sum);
}
/*OUTPUT-
Sum=55
*/